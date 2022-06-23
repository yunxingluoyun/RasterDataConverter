#pragma once

#include <QtWidgets/QDialog>
#include <QFileDialog>
#include <QStringList>
#include "gdal_priv.h"
#include "cpl_string.h"
#include "gdal_utils.h"
#include <iostream>
#include <QDebug>

namespace Ui {
	class Dialog;
}
class Dialog :public QDialog
{
	Q_OBJECT
public:
	explicit Dialog(QDialog* parent = 0);
	~Dialog();

public slots:
    // ѡ�����ļ�
    void OpenFiles();
    // ����ļ���·��
    void output_FilesDir();
	// ������ʽת��
	void formatConversion();
private:
	Ui::Dialog* ui;
	QStringList fileNames;// ��ȡդ������·��
	QString filePath;// ������ļ���
	QString inputFormat;// �����ʽ
	QStringList imageNames; // Ӱ�������б����ڱ���Ӱ�񣨲�����·����

	void getImagesNames();//��ȡӰ�������б�
};


