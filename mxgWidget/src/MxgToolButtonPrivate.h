#pragma once

#include <QObject>
#include "stdafx.hpp"

class MxgToolButton;
class MxgToolButtonPrivate  : public QObject
{
	Q_OBJECT
	Q_D_CREATE(MxgToolButton)

public:
	explicit MxgToolButtonPrivate(QObject *parent = nullptr);
	~MxgToolButtonPrivate();
};
