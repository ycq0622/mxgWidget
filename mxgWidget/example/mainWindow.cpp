#include "mainWindow.h"
#include "MxgAppBar.h"

mainWindow::mainWindow(QMainWindow *parent)
	: QMainWindow(parent)
{
	auto* appBar = new MxgAppBar(this);
	setCentralWidget(appBar);
}

mainWindow::~mainWindow()
{}
