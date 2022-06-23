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
    // 选择多个文件
    void OpenFiles();
    // 输出文件夹路径
    void output_FilesDir();
	// 批量格式转换
	void formatConversion();
private:
	Ui::Dialog* ui;
	QStringList fileNames;// 获取栅格数据路径
	QString filePath;// 输出测文件夹
	QString inputFormat;// 输入格式
	QStringList imageNames; // 影像名称列表，用于保存影像（不包含路径）

	void getImagesNames();//获取影像名称列表
};


