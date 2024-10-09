#pragma once

#include <QObject>
#include <QMainWindow>

class mainWindow  : public QMainWindow
{
	Q_OBJECT

public:
	explicit mainWindow(QMainWindow *parent = nullptr);
	~mainWindow();
};
