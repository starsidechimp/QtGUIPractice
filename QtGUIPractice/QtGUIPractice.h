#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGUIPractice.h"

class QtGUIPractice : public QMainWindow
{
	Q_OBJECT

public:
	QtGUIPractice(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtGUIPracticeClass ui;
};
