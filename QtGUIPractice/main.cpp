#include "QtGUIPractice.h"
#include <QtWidgets/QApplication>
#include <qwindow.h>
#include <QApplication>
#include <qpushbutton.h>
#include <memory>
#include <string>
#include <qscrollbar.h>
#include <qobject.h>
#include <qlabel.h>
#include <qstackedwidget.h>
#include <qradiobutton.h>
#include <qgroupbox.h>
#include <QVBoxLayout>
#include <qcoreapplication.h>
#include <qstring.h>
#include <qboxlayout.h>

std::unique_ptr<QPushButton> fButton(const QString name, QRect geometry, const QString tooltip, QWidget *window);

int main(int argc, char *argv[])
{
	int *testing = new int;
	QApplication a(argc, argv);
	
	//Create application Icon
	auto appIcon = std::make_unique<QIcon>("C:/Users/Nathan/Desktop/Qt Work/Qt GUI Practice/Kermy.jpg");

	a.setWindowIcon(*appIcon);
	//a.setWindowTitle("Titties");
	//QtGUIPractice window;
	auto window = std::make_unique<QMainWindow>();
	window->setWindowTitle("Title Goes Here");
	
	//Create the  window Icon
	auto windowIcon = std::make_unique<QIcon>("C:/Users/Nathan/Desktop/Qt Work/Qt GUI Practice/Everlasting_Heat.jpg");

	window->setWindowIcon(*windowIcon);
	
	//Create Window Layout
	auto windowLayout = std::make_unique<QBoxLayout>(QBoxLayout::LeftToRight);
	windowLayout->addWidget(window.get());
	
	QPushButton *button = new QPushButton("Testing", window.get());
	//QWidget *testWidget = new QWidget;
	QFont font("Calibri");
	button->setFont(font);
	window->setFixedSize(750, 750);
	QIcon icon("C:/Users/Nathan/Desktop/Politics/white_supremacist.jpg");
	QSize *size = new QSize(100,100);
	//button->setIcon(icon);
	//icon.setIconSize(QSize(100, 100));
	//button->setFixedSize(75, 25);
	button->setGeometry(50,50,80,30);
	//button->setIconSize(QSize(500, 500));
	QMenu *menu = new QMenu;
	QAction *action = new QAction("Test Action");
	
	std::unique_ptr<QPushButton> pButton = std::make_unique<QPushButton>("Testing", window.get());
	auto pMenu = std::make_unique<QMenu>();
	auto pAction = std::make_unique<QAction>();
	auto pIcon = std::make_unique<QIcon>("C:/Users/Nathan/Desktop/Politics/white_supremacist.jpg");
	auto testTab = std::make_unique<QTabWidget>();
	auto testWidget = std::make_unique<QWidget>(window.get());
	
	auto widgetPage1 = std::make_unique<QWidget>();
	auto widgetPage2 = std::make_unique<QWidget>();
	auto widgetPage3 = std::make_unique<QWidget>();

	auto stackedWidget = std::make_unique<QStackedWidget>(window.get());
	stackedWidget->addWidget(widgetPage1.get());
	stackedWidget->addWidget(widgetPage2.get());
	stackedWidget->addWidget(widgetPage3.get());


	//Radio Buttons
	auto testRadio1 = std::make_unique<QRadioButton>("Test 1");
	auto testRadio2 = std::make_unique<QRadioButton>("Test 2");
	testRadio1->setChecked(true);


	//Layout for the Group
	auto testLayout = std::make_unique<QVBoxLayout>();
	testLayout->addWidget(testRadio1.get());
	testLayout->addWidget(testRadio2.get());
	testLayout->addStretch(3);

	//Group Widget
	auto testGroupBox = std::make_unique<QGroupBox>("Group Title", window.get());
	testGroupBox->setLayout(testLayout.get());
	testGroupBox->setGeometry(100,100,100,100);




	//pButton->setText("Testing");
	pButton->setMenu(pMenu.get());
	pButton->setGeometry(200, 200, 75, 50);
	pMenu->addAction(pAction.get());
	menu->addAction(action);
	button->setMenu(menu);
	//button->setText("Testing");
	button->setToolTip("Testing Tooltip");
	button->show();
	pButton->show();
	testGroupBox-> show();
	window->show();
	//testWidget->show();
	auto newButton = fButton("Testing", { 200,200,400,400 }, "Testing", window.get());
	newButton->setIcon(*pIcon.get());
	newButton->setIconSize({ 400, 400 });
	newButton->show();
	auto testObject = std::make_unique<QObject>();
	auto testScrollBar = std::make_unique<QScrollBar>();
	auto testLabel = std::make_unique<QLabel>();
	
	
	return a.exec();
}

std::unique_ptr<QPushButton> fButton(const QString text, QRect geometry, const QString tooltip, QWidget *window)
{
	auto tempButton = std::make_unique<QPushButton>(text, window);
	tempButton->setGeometry(geometry);
	tempButton->setToolTip(tooltip);
	return std::move(tempButton);
}

//int scrollValue