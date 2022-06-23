#include "ui_mainwindow.h"
#include "mainwindow.h"

Dialog::Dialog(QDialog* parent) :
	QDialog(parent), ui(new Ui::Dialog)
{
	ui->setupUi(this);
	////// connections
	QObject::connect(ui->input_pushButton, SIGNAL(clicked()), this, SLOT(OpenFiles()));
	QObject::connect(ui->output_pushButton, SIGNAL(clicked()), this, SLOT(output_FilesDir()));
	QObject::connect(ui->pushButton , SIGNAL(clicked()), this, SLOT(formatConversion()));
}

Dialog::~Dialog()
{
	delete ui;
}

void Dialog::OpenFiles()
{
    fileNames = QFileDialog::getOpenFileNames(this, QStringLiteral("选择多文件对话框！"), "./", QStringLiteral("栅格数据(*.tif *.png *.pix *.bil *.ntf);;"));
	//Dialog::formatConversion(fileNames);
	ui->lineEdit->setText(fileNames[0]);
	Dialog::getImagesNames();

}

void Dialog::output_FilesDir()
{
	filePath = QFileDialog::getExistingDirectory(this, QStringLiteral("请选择文件保存路径..."), "./");
	ui->lineEdit_2->setText(filePath);
	filePath.append("/");
	//qDebug() << "file_path :" << filePath << endl;
}

void Dialog::getImagesNames()
{
	for (const QString& fileName : fileNames)
	{
		imageNames.append(fileName.split("/").takeLast().split(".").takeFirst());
		inputFormat = fileName.split(".").takeLast();
	}
}

void Dialog::formatConversion()
{


	for (int i = 0; i < fileNames.size(); i++)
	{
		GDALAllRegister();
		//添加命令参数,每次添加一个!!!
		char** argv = NULL;
		QString outputFormat = ui->dataFormat_comboBox->currentText().toUtf8();
		//qDebug() << outputFormat << Qt::endl;
		if (outputFormat == QString(".pix"))
		{
			argv = CSLAddString(argv, "-ot");
			argv = CSLAddString(argv, ui->dataType_comboBox->currentText().toUtf8().data());
			argv = CSLAddString(argv, "-of");
			argv = CSLAddString(argv, "PCIDSK");
		}
		else if (outputFormat == QString(".bil"))
		{
			argv = CSLAddString(argv, "-ot");
			argv = CSLAddString(argv, ui->dataType_comboBox->currentText().toUtf8().data());
			argv = CSLAddString(argv, "-of");
			argv = CSLAddString(argv, "ENVI");
		}
		else if (outputFormat == QString(".png"))
		{
			argv = CSLAddString(argv, "-ot");
			argv = CSLAddString(argv, ui->dataType_comboBox->currentText().toUtf8().data());
			argv = CSLAddString(argv, "-of");
			argv = CSLAddString(argv, "PNG");
		}
		else if (outputFormat == QString(".img"))
		{
			argv = CSLAddString(argv, "-ot");
			argv = CSLAddString(argv, ui->dataType_comboBox->currentText().toUtf8().data());
			argv = CSLAddString(argv, "-of");
			argv = CSLAddString(argv, "HFA");
		}
		else if (outputFormat == QString(".ntf"))
		{
			argv = CSLAddString(argv, "-ot");
			argv = CSLAddString(argv, ui->dataType_comboBox->currentText().toUtf8().data());
			argv = CSLAddString(argv, "-of");
			argv = CSLAddString(argv, "NITF");
		}
		else if (outputFormat == QString(".tif"))
		{
			argv = CSLAddString(argv, "-ot");
			argv = CSLAddString(argv, ui->dataType_comboBox->currentText().toUtf8().data());
			argv = CSLAddString(argv, "-of");
			argv = CSLAddString(argv, "GTiff");
		}
		else
		{
			std::cout << "error!" << std::endl;

		}


		if (fileNames.isEmpty())
			return;

		QString outputName;
		QString filePathtemp;
		filePathtemp = filePath;
		outputName.append(filePathtemp.append(imageNames[i].append(ui->dataFormat_comboBox->currentText())));
		//返回
		int bUsageError = FALSE;
		//输入列表
		GDALDatasetH TestDs = GDALOpen(fileNames[i].toUtf8().data(), GA_ReadOnly);
		//GDALTranslate
		GDALTranslateOptions* opt = GDALTranslateOptionsNew(argv, NULL);

		GDALDataset* dst = (GDALDataset*)GDALTranslate(outputName.toUtf8().data(), TestDs, opt, &bUsageError);
		GDALTranslateOptionsFree(opt);
		CSLDestroy(argv);
		//
		
	}

}