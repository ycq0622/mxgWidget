#pragma once

#include <QObject>
#include "stdafx.hpp"

//ö���ർ��  ����QT5�Ͱ汾
#if QT_VERSION >= QT_VERSION_CHECK(5, 14, 0)
#define Q_BEGIN_ENUM_CREATE(CLASS) \
    namespace CLASS                \
    {                              \
    Q_NAMESPACE_EXPORT(MXG_EXPORT)

#define Q_END_ENUM_CREATE(CLASS) }

#define Q_ENUM_CREATE(CLASS) Q_ENUM_NS(CLASS)
#else
#define Q_BEGIN_ENUM_CREATE(CLASS)          \
    class ELA_EXPORT CLASS : public QObject \
    {                                       \
        Q_OBJECT                            \
    public:

#define Q_END_ENUM_CREATE(CLASS) \
private:                         \
    Q_DISABLE_COPY(CLASS)        \
    }                            \
    ;

#define Q_ENUM_CREATE(CLASS) Q_ENUM(CLASS)
#endif

Q_BEGIN_ENUM_CREATE(MxgThemeType)
enum ThemeMode
{
	Light = 0x0000,
	Dark = 0x0001,
};
Q_ENUM_CREATE(ThemeMode)

enum ThemeColor
{
    AcrylicUrlCardBorder,
    AcrylicUrlCardBase,
    AcrylicUrlCardHover,
    AcrylicUrlCardSubTitleText,
    BreadcrumbBarText,
    BreadcrumbBarTextHasFocus,
    CheckBoxBorder,
    CheckBoxCheckedBorder,
    CheckBoxPressBorder,
    CheckBoxBase,
    CheckBoxHover,
    CheckBoxCheckedBase,
    CheckBoxCheckedHover,
    CheckBoxCheckedPress,
    ComboBoxMark,
    ComboBoxBorder,
    ComboBoxBase,
    ComboBoxHover,
    ComboBoxShapedFrameBorder,
    ComboBoxShapedFrameBase,
    ComboBoxItemViewItemHover,
    ComboBoxItemViewItemSelected,
    ComboBoxItemViewItemSelectedHover,
    ContentDialogBase,
    ContentDialogButtonAreaBase,
    ContentDialogRightButtonBase,
    ContentDialogRightButtonText,
    ContentDialogRightButtonHover,
    ContentDialogRightButtonPress,
    DockWidgetFloatBorder,
    DockWidgetBaseStart,
    DockWidgetBaseEnd,
    DockWidgetTitleBarBase,
    DockWidgetTitleBarFloatButtonHover,
    DockWidgetTitleBarCloseButtonHover,
    IconButtonDefaultHover,
    IconButtonDefaultIconText,
    InteractiveCardHover,
    LineEditMark,
    LineEditBorder,
    LineEditBase,
    LineEditHover,
    LineEditHasFocus,
    LineEditHemline,
    ListViewBase,
    ListViewAlternatingRow,
    ListViewBorder,
    ListViewItemHover,
    ListViewItemSelected,
    ListViewItemSelectedHover,
    MenuBaseStart,
    MenuBaseEnd,
    MenuBorder,
    MenuSeparator,
    MenuHover,
    MenuBarExpandButtonHover,
    MenuBarItemSelected,
    MenuBarItemPress,
    MessageButtonBorder,
    MessageButtonBase,
    MessageButtonHover,
    MessageButtonTextPress,
    MessageButtonDisableBase,
    NavigationBaseStart,
    NavigationBaseEnd,
    NavigationHover,
    NavigationSelected,
    NavigationSelectedHover,
    NavigationExpanderNodeKeyPoint,
    NavigationKeyPointBase,
    NavigationKeyPointCenter,
    NavigationKeyPointText,
    NavigationMark,
    NavigationFooterBaseLine,
    PivotText,
    PivotTextHasFocus,
    PivotMark,
    PopularCardBorder,
    PopularCardFloaterBorder,
    PopularCardBase,
    PopularCardInteractiveTipsBase,
    PopularCardInteractiveTips,
    PopularCardFloaterBaseLine,
    PopularCardDetailedText,
    ProgressBarBase,
    ProgressBarContentsBase,
    PromotionCardDefaultHighlightStart,
    PromotionCardDefaultHighlightEnd,
    PromotionViewIndicator,
    PushButtonBorder,
    PushButtonHemline,
    PushButtonDefaultBase,
    PushButtonDefaultHover,
    PushButtonDefaultPress,
    PushButtonDefaultText,
    PushButtonDisableBase,
    RadioButtonStateOffBorder,
    RadioButtonStateOffBase,
    RadioButtonStateOffHover,
    RadioButtonStateOnBorder,
    RadioButtonStateOnBase,
    RadioButtonStateOnCenter,
    ReminderCardBorder,
    ReminderCardBase,
    ReminderCardHover,
    ReminderCardMark,
    ReminderCardSubTitleText,
    ScrollBarBase,
    ScrollBarHandle,
    ScrollPageAreaBorder,
    ScrollPageAreaBase,
    SliderBaseNoValue,
    SliderBaseHasValue,
    SliderHandleBase,
    SliderHandleCenter,
    SpinBoxBase,
    SpinBoxButtonBase,
    SpinBoxButtonHover,
    SpinBoxButtonPress,
    SpinBoxMarkNoFocus,
    SpinBoxMarkHasFocus,
    StatusBarBase,
    StatusBarBorder,
    StatusBarSeparator,
    SuggestBoxViewItemHover,
    SuggestBoxViewItemSelected,
    SuggestBoxViewItemSelectedHover,
    SuggestBoxSearchViewContainerBorder,
    SuggestBoxSearchViewContainerBase,
    TabBarCloseButtonHover,
    TabBarTabBase,
    TabBarTabHover,
    TabBarTabSelected,
    TabBarTabMark,
    TabBarPanelButtonToolHover,
    TabBarPanelButtonToolPress,
    TableViewBase,
    TableViewHeaderBase,
    TableViewHeaderHover,
    TableViewHeaderSelected,
    TableViewHeaderSelectedHover,
    TableViewAlternatingRow,
    TableViewBorder,
    TableViewItemHover,
    TableViewItemSelected,
    ToggleButtonNoToggledBorder,
    ToggleButtonNoToggledBase,
    ToggleButtonNoToggledPress,
    ToggleButtonNoToggledHover,
    ToggleButtonNoToggledText,
    ToggleButtonToggledBorder,
    ToggleButtonToggledBase,
    ToggleButtonToggledPress,
    ToggleButtonToggledHover,
    ToggleButtonToggledText,
    ToggleButtonHemline,
    ToggleButtonDisableBase,
    ToggleSwitchNoToggledBorder,
    ToggleSwitchNoToggledBase,
    ToggleSwitchNoToggledHover,
    ToggleSwitchNoToggledCenter,
    ToggleSwitchToggledBorder,
    ToggleSwitchToggledBase,
    ToggleSwitchToggledCenter,
    ToggleSwitchDisableBase,
    ToggleSwitchDisableCenter,
    ToolBarExpandButtonHover,
    ToolBarWindowBorder,
    ToolBarWindowBase,
    ToolBarSeparator,
    ToolBarHandle,
    ToolButtonBorder,
    ToolButtonBase,
    ToolButtonHover,
    ToolButtonTransparentHover,
    ToolButtonPress,
    ToolButtonTransparentPress,
    ToolButtonIndicator,
    WindowText,
    WindowTextDisable,
    WindowTextPress,
    WindowBaseStart,
    WindowBaseEnd,
    WindowBaseLine,
    WindowDockWidgetResizeHandle,
    WindowDockWidgetResizeHandleHover,
    WindowRubberBand,
    WindowTabBarBase,
    WindowTabBarHover,
    WindowTabBarSelected,
    WindowTabBarSeparator,
    WindowCentralStackBaseStart,
    WindowCentralStackBaseEnd,
};
Q_ENUM_CREATE(ThemeColor)

Q_END_ENUM_CREATE(MxgThemeType)


Q_BEGIN_ENUM_CREATE(MxgAppBarType)
enum ButtonType     // ��ť����
{
	RouteBackButtonHint = 0x0001,       // ���ذ�ť
	NavigationButtonHint = 0x0002,      // ������ť
	StayTopButtonHint = 0x0004, 	    // �ö���ť
	ThemeChangeButtonHint = 0x0008,     // �����л���ť
    MinimizeButtonHint = 0x00010,       // ��С����ť
	MaximizeButtonHint = 0x0020,        // ��󻯰�ť
	CloseButtonHint = 0x0040,           // �رհ�ť
};
Q_ENUM_CREATE(ButtonType)               // ö���ർ��
Q_DECLARE_FLAGS(ButtonFlags, ButtonType)

enum CustomArea    // �Զ�������
{
	LeftArea = 0x0001,                  // �������
	MiddleArea = 0x0002,                // �м�����
	RightArea = 0x0003,                 // �Ҳ�����
};
Q_ENUM_CREATE(CustomArea)

enum WMMouseActionType                  // ����¼�����
{
	WMLBUTTONDOWN = 0x0001,             // ����������
	WMLBUTTONUP = 0x0002,               // ������̧��
	WMLBUTTONDBLCLK = 0x0004,           // ������˫��	
	WMNCLBUTTONDOWN = 0x0008,			// ���ǿͻ����������
};
Q_ENUM_CREATE(WMMouseActionType)
Q_DECLARE_FLAGS(WMMouseActionTypes, WMMouseActionType)
Q_END_ENUM_CREATE(ElaAppBarType)
