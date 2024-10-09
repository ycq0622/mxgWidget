#pragma once

#include <QObject>
#include <QLabel>
#include <QScreen>
#include <QHBoxLayout>
#include <QVBoxLayout>

#include "stdafx.hpp"
#include "def.hpp"
#include "MxgAppBar.h"

class MxgAppBarPrivate : public QObject
{
    Q_OBJECT
    Q_D_CREATE(MxgAppBar)
    Q_PROPERTY_CREATE_D(bool, IsStayTop)
    Q_PROPERTY_CREATE_D(bool, IsFixedSize)
    Q_PROPERTY_CREATE_D(bool, IsDefaultClosed)
    Q_PROPERTY_CREATE_D(bool, IsOnlyAllowMinAndClose)
    Q_PROPERTY_CREATE_D(int, MxgAppBarHeight)
    Q_PROPERTY_CREATE_D(QWidget*, CustomWidget)
    Q_PROPERTY_CREATE_D(int, CustomWidgetMaximumWidth)

public:
    MxgAppBarPrivate(QObject* parent = nullptr);
    ~MxgAppBarPrivate();

	Q_SLOT void onMinButtonClicked();
	Q_SLOT void onCloseButtonClicked();
	Q_SLOT void onMaxButtonClicked();
	Q_SLOT void onStyTopButtonClicked();

private:
    QHBoxLayout* m_mainLayout{ nullptr };
	QVBoxLayout* m_iconLayout{ nullptr };
	QVBoxLayout* m_titleLayout{ nullptr };
    MxgAppBarType::ButtonFlags m_buttonFlags;

};
