#pragma once

#include <QWidget>

#include "def.hpp"
#include "stdafx.hpp"

class MxgAppBarPrivate;
class MXG_EXPORT MxgAppBar : public QWidget
{
	Q_OBJECT
	Q_Q_CREATE(MxgAppBar)
	Q_PROPERTY_CREATE_Q_H(bool, IsStayTop);			// �Ƿ�ģ̬�ö�
	Q_PROPERTY_CREATE_Q_H(bool, IsFixedSize);		// �Ƿ�̶���С
	Q_PROPERTY_CREATE_Q_H(bool, IsDefaultClose);	// �Ƿ�Ĭ�Ϲر�
	Q_PROPERTY_CREATE_Q_H(int, AppBarHeight);		// �Ƿ�appbar height

	Q_PROPERTY_CREATE_Q_H(int, CustomMaximumWidth); // �ؼ��������

	//Q_PROPERTY_CREATE_Q_H(QString, Title);			// ����
	//Q_PROPERTY_CREATE_Q_H(QString, Icon);			// ͼ��

public:
	MxgAppBar(QWidget* parent = nullptr);
	~MxgAppBar();

	// ����API
	// �����Զ���ؼ�
	void setCustomWidget(MxgAppBarType::CustomArea customArea, QWidget* CustomWidget);
	void getCustomWidget() const;

	// ���ð�ť��״̬
	void setWindowButtonFlag(MxgAppBarType::ButtonType buttonType, bool isEnable = true);
	void setWindowButtonFlags(MxgAppBarType::ButtonFlags buttonFlags);

	MxgAppBarType::ButtonFlags getWindowButtonFlags() const;

	// ���÷��ذ�ť�Ŀ�����
	void setRouteBackButtonEnable(bool isEnable = true);

	void closeWindow(); // �رմ���

#ifdef Q_OS_WIN
#if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0)
	int takeOverNativeEvent(const QByteArray& eventType, void* message, qintptr* result); // ԭ���¼����������°汾 Qt��
#else
	int takeOverNativeEvent(const QByteArray& eventType, void* message, long* result); // ԭ���¼����������ɰ汾 Qt��
#endif
#endif

Q_SIGNALS: // �����ź�
	Q_SIGNAL void s_routeBackButtonClicked(); // ���ذ�ť����ź�
	Q_SIGNAL void s_navigationButtonClicked(); // ������ť�����
	Q_SIGNAL void s_themeChangeButtonClicked(); // ����仯��ť�����
	Q_SIGNAL void s_closeButtonClicked(); // �رհ�ť�����
	Q_SIGNAL void s_customWidgetChanged(); // �Զ���ؼ��仯

protected:
	virtual bool eventFilter(QObject* watched, QEvent* event) override;
};
