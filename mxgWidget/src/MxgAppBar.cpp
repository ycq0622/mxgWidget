#include "MxgAppBar.h"

MxgAppBar::MxgAppBar(QWidget*parent)
	: QWidget(parent)
{

}

MxgAppBar::~MxgAppBar()
{}

void MxgAppBar::setCustomWidget(MxgAppBarType::CustomArea customArea, QWidget * CustomWidget)
{
}

void MxgAppBar::getCustomWidget() const
{
}

void MxgAppBar::setWindowButtonFlag(MxgAppBarType::ButtonType buttonType, bool isEnable)
{
}

void MxgAppBar::setWindowButtonFlags(MxgAppBarType::ButtonFlags buttonFlags)
{
}

MxgAppBarType::ButtonFlags MxgAppBar::getWindowButtonFlags() const
{
	return MxgAppBarType::ButtonFlags();
}

void MxgAppBar::setRouteBackButtonEnable(bool isEnable)
{
}

void MxgAppBar::closeWindow()
{
}

bool MxgAppBar::eventFilter(QObject* watched, QEvent* event)
{
	return false;
}
