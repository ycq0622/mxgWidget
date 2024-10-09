#include "MxgThemePrivate.h"

MxgThemePrivate::MxgThemePrivate(QObject *parent)
	: QObject(parent)
{}

MxgThemePrivate::~MxgThemePrivate()
{}

void MxgThemePrivate::__initThemeColor()
{

    //ElaAcrylicUrlCard
    m_lightThemeColorList[MxgThemeType::AcrylicUrlCardBorder] = QColor(0xBE, 0xBA, 0xBE);
    m_darkThemeColorList[MxgThemeType::AcrylicUrlCardBorder] = QColor(0x52, 0x50, 0x52);
    m_lightThemeColorList[MxgThemeType::AcrylicUrlCardBase] = QColor(0xFB, 0xFB, 0xFD);
    m_darkThemeColorList[MxgThemeType::AcrylicUrlCardBase] = QColor(0x04, 0x09, 0x11);
    m_lightThemeColorList[MxgThemeType::AcrylicUrlCardHover] = QColor(0xE9, 0xE9, 0xF0);
    m_darkThemeColorList[MxgThemeType::AcrylicUrlCardHover] = QColor(0x17, 0x17, 0x17);
    m_lightThemeColorList[MxgThemeType::AcrylicUrlCardSubTitleText] = Qt::black;
    m_darkThemeColorList[MxgThemeType::AcrylicUrlCardSubTitleText] = QColor(0x79, 0x72, 0x68);

    //ElaBreadcrumbBar
    m_lightThemeColorList[MxgThemeType::BreadcrumbBarText] = QColor(0x5B, 0x5B, 0x5E);
    m_darkThemeColorList[MxgThemeType::BreadcrumbBarText] = QColor(0xDE, 0xDE, 0xDE);
    m_lightThemeColorList[MxgThemeType::BreadcrumbBarTextHasFocus] = QColor(0x86, 0x86, 0x8A);
    m_darkThemeColorList[MxgThemeType::BreadcrumbBarTextHasFocus] = QColor(0x86, 0x86, 0x8A);

    //ElaCheckBox
    m_lightThemeColorList[MxgThemeType::CheckBoxBorder] = QColor(0x87, 0x87, 0x87);
    m_darkThemeColorList[MxgThemeType::CheckBoxBorder] = QColor(0xA0, 0xA0, 0xA0);
    m_lightThemeColorList[MxgThemeType::CheckBoxCheckedBorder] = QColor(0x00, 0x66, 0xB4);
    m_darkThemeColorList[MxgThemeType::CheckBoxCheckedBorder] = QColor(0x4C, 0xA0, 0xE0);
    m_lightThemeColorList[MxgThemeType::CheckBoxPressBorder] = QColor(0xBF, 0xBF, 0xBF);
    m_darkThemeColorList[MxgThemeType::CheckBoxPressBorder] = QColor(0x5A, 0x5A, 0x5A);
    m_lightThemeColorList[MxgThemeType::CheckBoxBase] = QColor(0xF7, 0xF7, 0xF7);
    m_darkThemeColorList[MxgThemeType::CheckBoxBase] = QColor(0x2D, 0x2D, 0x2D);
    m_lightThemeColorList[MxgThemeType::CheckBoxHover] = QColor(0xEC, 0xEC, 0xEC);
    m_darkThemeColorList[MxgThemeType::CheckBoxHover] = QColor(0x48, 0x48, 0x48);
    m_lightThemeColorList[MxgThemeType::CheckBoxCheckedBase] = QColor(0x00, 0x66, 0xB4);
    m_darkThemeColorList[MxgThemeType::CheckBoxCheckedBase] = QColor(0x4C, 0xA0, 0xE0);
    m_lightThemeColorList[MxgThemeType::CheckBoxCheckedHover] = QColor(0x00, 0x75, 0xCF);
    m_darkThemeColorList[MxgThemeType::CheckBoxCheckedHover] = QColor(0x42, 0x8B, 0xC3);
    m_lightThemeColorList[MxgThemeType::CheckBoxCheckedPress] = QColor(0x00, 0x85, 0xEA);
    m_darkThemeColorList[MxgThemeType::CheckBoxCheckedPress] = QColor(0x3A, 0x7B, 0xAC);

    //ElaComboBox ElaMultiComboBoxs
    m_lightThemeColorList[MxgThemeType::ComboBoxMark] = QColor(0x0E, 0x6F, 0xC3);
    m_darkThemeColorList[MxgThemeType::ComboBoxMark] = QColor(0x4C, 0xA0, 0xE0);
    m_lightThemeColorList[MxgThemeType::ComboBoxBorder] = QColor(0xDF, 0xDF, 0xDF);
    m_darkThemeColorList[MxgThemeType::ComboBoxBorder] = QColor(0x4B, 0x4B, 0x4D);
    m_lightThemeColorList[MxgThemeType::ComboBoxBase] = QColor(0xFD, 0xFD, 0xFD);
    m_darkThemeColorList[MxgThemeType::ComboBoxBase] = QColor(0x3B, 0x3B, 0x3B);
    m_lightThemeColorList[MxgThemeType::ComboBoxHover] = QColor(0xF6, 0xF6, 0xF6);
    m_darkThemeColorList[MxgThemeType::ComboBoxHover] = QColor(0x44, 0x44, 0x44);
    m_lightThemeColorList[MxgThemeType::ComboBoxShapedFrameBorder] = QColor(0xBE, 0xBA, 0xBE);
    m_darkThemeColorList[MxgThemeType::ComboBoxShapedFrameBorder] = QColor(0x52, 0x50, 0x52);
    m_lightThemeColorList[MxgThemeType::ComboBoxShapedFrameBase] = QColor(0xF9, 0xF9, 0xF9);
    m_darkThemeColorList[MxgThemeType::ComboBoxShapedFrameBase] = QColor(0x2D, 0x2D, 0x2D);
    m_lightThemeColorList[MxgThemeType::ComboBoxItemViewItemHover] = QColor(0xE5, 0xE4, 0xEB);
    m_darkThemeColorList[MxgThemeType::ComboBoxItemViewItemHover] = QColor(0x40, 0x40, 0x40);
    m_lightThemeColorList[MxgThemeType::ComboBoxItemViewItemSelected] = QColor(0xE5, 0xE4, 0xEB);
    m_darkThemeColorList[MxgThemeType::ComboBoxItemViewItemSelected] = QColor(0x4F, 0x4F, 0x4F);
    m_lightThemeColorList[MxgThemeType::ComboBoxItemViewItemSelectedHover] = QColor(0xEA, 0xE9, 0xF0);
    m_darkThemeColorList[MxgThemeType::ComboBoxItemViewItemSelectedHover] = QColor(0x40, 0x40, 0x40);

    //ElaContentDialog
    m_lightThemeColorList[MxgThemeType::ContentDialogBase] = Qt::white;
    m_darkThemeColorList[MxgThemeType::ContentDialogBase] = QColor(0x2B, 0x2B, 0x2B);
    m_lightThemeColorList[MxgThemeType::ContentDialogButtonAreaBase] = QColor(0xF3, 0xF3, 0xF3);
    m_darkThemeColorList[MxgThemeType::ContentDialogButtonAreaBase] = QColor(0x20, 0x20, 0x20);
    m_lightThemeColorList[MxgThemeType::ContentDialogRightButtonBase] = QColor(0x00, 0x66, 0xB4);
    m_darkThemeColorList[MxgThemeType::ContentDialogRightButtonBase] = QColor(0x4C, 0xA0, 0xE0);
    m_lightThemeColorList[MxgThemeType::ContentDialogRightButtonText] = Qt::white;
    m_darkThemeColorList[MxgThemeType::ContentDialogRightButtonText] = Qt::white;
    m_lightThemeColorList[MxgThemeType::ContentDialogRightButtonHover] = QColor(0x00, 0x70, 0xC6);
    m_darkThemeColorList[MxgThemeType::ContentDialogRightButtonHover] = QColor(0x45, 0x91, 0xCC);
    m_lightThemeColorList[MxgThemeType::ContentDialogRightButtonPress] = QColor(0x00, 0x7A, 0xD8);
    m_darkThemeColorList[MxgThemeType::ContentDialogRightButtonPress] = QColor(0x3F, 0x85, 0xBB);

    //ElaDockWidget
    m_lightThemeColorList[MxgThemeType::DockWidgetBaseStart] = QColor(0xF3, 0xF2, 0xF9);
    m_darkThemeColorList[MxgThemeType::DockWidgetBaseStart] = QColor(0x1A, 0x1A, 0x1A);
    m_lightThemeColorList[MxgThemeType::DockWidgetBaseEnd] = QColor(0xF4, 0xF1, 0xF8);
    m_darkThemeColorList[MxgThemeType::DockWidgetBaseEnd] = QColor(0x1A, 0x1A, 0x1A);
    m_lightThemeColorList[MxgThemeType::DockWidgetTitleBarBase] = QColor(0xF5, 0xF1, 0xFF);
    m_darkThemeColorList[MxgThemeType::DockWidgetTitleBarBase] = QColor(0x40, 0x40, 0x40);
    m_lightThemeColorList[MxgThemeType::DockWidgetTitleBarFloatButtonHover] = QColor(0xEF, 0xE6, 0xED);
    m_darkThemeColorList[MxgThemeType::DockWidgetTitleBarFloatButtonHover] = QColor(0x2F, 0x2E, 0x2C);
    m_lightThemeColorList[MxgThemeType::DockWidgetTitleBarCloseButtonHover] = QColor(0xC4, 0x2B, 0x1C);
    m_darkThemeColorList[MxgThemeType::DockWidgetTitleBarCloseButtonHover] = QColor(0xC4, 0x2B, 0x1C);
    m_lightThemeColorList[MxgThemeType::DockWidgetFloatBorder] = QColor(0xBE, 0xBA, 0xBE);
    m_darkThemeColorList[MxgThemeType::DockWidgetFloatBorder] = QColor(0x52, 0x50, 0x52);

    //ElaIconButton
    m_lightThemeColorList[MxgThemeType::IconButtonDefaultHover] = QColor(0xEA, 0xE9, 0xF0);
    m_darkThemeColorList[MxgThemeType::IconButtonDefaultHover] = QColor(0x2F, 0x2E, 0x2C);
    m_lightThemeColorList[MxgThemeType::IconButtonDefaultIconText] = Qt::black;
    m_darkThemeColorList[MxgThemeType::IconButtonDefaultIconText] = Qt::white;

    //ElaInteractiveCard
    m_lightThemeColorList[MxgThemeType::InteractiveCardHover] = QColor(0xE9, 0xE9, 0xF0);
    m_darkThemeColorList[MxgThemeType::InteractiveCardHover] = QColor(0x27, 0x27, 0x27);

    //ElaLineEdit
    m_lightThemeColorList[MxgThemeType::LineEditMark] = QColor(0x0E, 0x6F, 0xC3);
    m_darkThemeColorList[MxgThemeType::LineEditMark] = QColor(0x4C, 0xA0, 0xE0);
    m_lightThemeColorList[MxgThemeType::LineEditBorder] = QColor(0xE1, 0xE6, 0xEA);
    m_darkThemeColorList[MxgThemeType::LineEditBorder] = QColor(0x4C, 0x4C, 0x4C);
    m_lightThemeColorList[MxgThemeType::LineEditBase] = QColor(0xFA, 0xFC, 0xFD);
    m_darkThemeColorList[MxgThemeType::LineEditBase] = QColor(0x3E, 0x3E, 0x3E);
    m_lightThemeColorList[MxgThemeType::LineEditHover] = QColor(0xF4, 0xF7, 0xF9);
    m_darkThemeColorList[MxgThemeType::LineEditHover] = QColor(0x44, 0x44, 0x44);
    m_lightThemeColorList[MxgThemeType::LineEditHasFocus] = QColor(0xFF, 0xFF, 0xFF);
    m_darkThemeColorList[MxgThemeType::LineEditHasFocus] = QColor(0x24, 0x24, 0x24);
    m_lightThemeColorList[MxgThemeType::LineEditHemline] = QColor(0x86, 0x86, 0x86);
    m_darkThemeColorList[MxgThemeType::LineEditHemline] = QColor(0x86, 0x86, 0x86);

    //ElaListView
    m_lightThemeColorList[MxgThemeType::ListViewBase] = QColor(0xF0, 0xF0, 0xF5);
    m_darkThemeColorList[MxgThemeType::ListViewBase] = QColor(0x2D, 0x2D, 0x2D);
    m_lightThemeColorList[MxgThemeType::ListViewAlternatingRow] = QColor(0xF5, 0xF5, 0xFA);
    m_darkThemeColorList[MxgThemeType::ListViewAlternatingRow] = QColor(0x33, 0x33, 0x33);
    m_lightThemeColorList[MxgThemeType::ListViewBorder] = QColor(0xBE, 0xBA, 0xBE);
    m_darkThemeColorList[MxgThemeType::ListViewBorder] = QColor(0x52, 0x50, 0x52);
    m_lightThemeColorList[MxgThemeType::ListViewItemHover] = QColor(0xE4, 0xE4, 0xEB);
    m_darkThemeColorList[MxgThemeType::ListViewItemHover] = QColor(0x40, 0x40, 0x40);
    m_lightThemeColorList[MxgThemeType::ListViewItemSelected] = QColor(0xE4, 0xE4, 0xEB);
    m_darkThemeColorList[MxgThemeType::ListViewItemSelected] = QColor(0x40, 0x40, 0x40);
    m_lightThemeColorList[MxgThemeType::ListViewItemSelectedHover] = QColor(0xE9, 0xE9, 0xF0);
    m_darkThemeColorList[MxgThemeType::ListViewItemSelectedHover] = QColor(0x3A, 0x3A, 0x3A);

    //ElaMenu
    m_lightThemeColorList[MxgThemeType::MenuBaseStart] = QColor(0xF2, 0xE7, 0xF5);
    m_darkThemeColorList[MxgThemeType::MenuBaseStart] = QColor(0x2D, 0x2D, 0x2D);
    m_lightThemeColorList[MxgThemeType::MenuBaseEnd] = QColor(0xED, 0xF3, 0xF9);
    m_darkThemeColorList[MxgThemeType::MenuBaseEnd] = QColor(0x3D, 0x3D, 0x3D);
    m_lightThemeColorList[MxgThemeType::MenuBorder] = QColor(0xBE, 0xBA, 0xBE);
    m_darkThemeColorList[MxgThemeType::MenuBorder] = QColor(0x52, 0x50, 0x52);
    m_lightThemeColorList[MxgThemeType::MenuSeparator] = QColor(0xB3, 0xB3, 0xB3);
    m_darkThemeColorList[MxgThemeType::MenuSeparator] = QColor(0xB3, 0xB3, 0xB3);
    m_lightThemeColorList[MxgThemeType::MenuHover] = QColor(0xE5, 0xE3, 0xE6);
    m_darkThemeColorList[MxgThemeType::MenuHover] = QColor(0x46, 0x46, 0x46);

    //ElaMenuBar
    m_lightThemeColorList[MxgThemeType::MenuBarExpandButtonHover] = QColor(0xE9, 0xE9, 0xF0);
    m_darkThemeColorList[MxgThemeType::MenuBarExpandButtonHover] = QColor(0x40, 0x40, 0x40);
    m_lightThemeColorList[MxgThemeType::MenuBarItemSelected] = QColor(0xE5, 0xE4, 0xEB);
    m_darkThemeColorList[MxgThemeType::MenuBarItemSelected] = QColor(0x40, 0x40, 0x40);
    m_lightThemeColorList[MxgThemeType::MenuBarItemPress] = QColor(0xEA, 0xE9, 0xF0);
    m_darkThemeColorList[MxgThemeType::MenuBarItemPress] = QColor(0x33, 0x33, 0x33);

    //ElaMessageButton
    m_lightThemeColorList[MxgThemeType::MessageButtonBorder] = QColor(0xDF, 0xDF, 0xDF);
    m_darkThemeColorList[MxgThemeType::MessageButtonBorder] = QColor(0x50, 0x50, 0x50);
    m_lightThemeColorList[MxgThemeType::MessageButtonBase] = QColor(0xFD, 0xFD, 0xFD);
    m_darkThemeColorList[MxgThemeType::MessageButtonBase] = QColor(0x3E, 0x3E, 0x3E);
    m_lightThemeColorList[MxgThemeType::MessageButtonHover] = QColor(0xF6, 0xF6, 0xF6);
    m_darkThemeColorList[MxgThemeType::MessageButtonHover] = QColor(0x44, 0x44, 0x44);
    m_lightThemeColorList[MxgThemeType::MessageButtonTextPress] = QColor(0x64, 0x66, 0x73);
    m_darkThemeColorList[MxgThemeType::MessageButtonTextPress] = QColor(0xA1, 0xA2, 0xA2);
    m_lightThemeColorList[MxgThemeType::MessageButtonDisableBase] = QColor(0xF4, 0xF4, 0xF4);
    m_darkThemeColorList[MxgThemeType::MessageButtonDisableBase] = QColor(0x3B, 0x3B, 0x3B);

    //ElaNavigationBar
    m_lightThemeColorList[MxgThemeType::NavigationBaseStart] = QColor(0xF3, 0xF2, 0xF9);
    m_darkThemeColorList[MxgThemeType::NavigationBaseStart] = QColor(0x1A, 0x1A, 0x1A);
    m_lightThemeColorList[MxgThemeType::NavigationBaseEnd] = QColor(0xF4, 0xF1, 0xF8);
    m_darkThemeColorList[MxgThemeType::NavigationBaseEnd] = QColor(0x1A, 0x1A, 0x1A);
    m_lightThemeColorList[MxgThemeType::NavigationHover] = QColor(0xE9, 0xE9, 0xF0);
    m_darkThemeColorList[MxgThemeType::NavigationHover] = QColor(0x2B, 0x2C, 0x36);
    m_lightThemeColorList[MxgThemeType::NavigationSelected] = QColor(0xE9, 0xE9, 0xF0);
    m_darkThemeColorList[MxgThemeType::NavigationSelected] = QColor(0x2B, 0x2C, 0x36);
    m_lightThemeColorList[MxgThemeType::NavigationSelectedHover] = QColor(0xEC, 0xEC, 0xF3);
    m_darkThemeColorList[MxgThemeType::NavigationSelectedHover] = QColor(0x28, 0x27, 0x33);
    m_lightThemeColorList[MxgThemeType::NavigationExpanderNodeKeyPoint] = QColor(0xFF, 0x4D, 0x4F);
    m_darkThemeColorList[MxgThemeType::NavigationExpanderNodeKeyPoint] = QColor(0xFF, 0x4D, 0x4F);
    m_lightThemeColorList[MxgThemeType::NavigationKeyPointBase] = Qt::white;
    m_darkThemeColorList[MxgThemeType::NavigationKeyPointBase] = Qt::white;
    m_lightThemeColorList[MxgThemeType::NavigationKeyPointCenter] = QColor(0xFF, 0x4D, 0x4F);
    m_darkThemeColorList[MxgThemeType::NavigationKeyPointCenter] = QColor(0xFF, 0x4D, 0x4F);
    m_lightThemeColorList[MxgThemeType::NavigationKeyPointText] = Qt::white;
    m_darkThemeColorList[MxgThemeType::NavigationKeyPointText] = Qt::white;
    m_lightThemeColorList[MxgThemeType::NavigationMark] = QColor(0x0E, 0x6F, 0xC3);
    m_darkThemeColorList[MxgThemeType::NavigationMark] = QColor(0x4C, 0xA0, 0xE0);
    m_lightThemeColorList[MxgThemeType::NavigationFooterBaseLine] = QColor(0xD2, 0xD2, 0xD2);
    m_darkThemeColorList[MxgThemeType::NavigationFooterBaseLine] = QColor(0x50, 0x50, 0x50);

    //ElaPivot
    m_lightThemeColorList[MxgThemeType::PivotText] = QColor(0x5B, 0x5B, 0x5E);
    m_darkThemeColorList[MxgThemeType::PivotText] = QColor(0xDE, 0xDE, 0xDE);
    m_lightThemeColorList[MxgThemeType::PivotTextHasFocus] = QColor(0x86, 0x86, 0x8A);
    m_darkThemeColorList[MxgThemeType::PivotTextHasFocus] = QColor(0x86, 0x86, 0x8A);
    m_lightThemeColorList[MxgThemeType::PivotMark] = QColor(0x0E, 0x6F, 0xC3);
    m_darkThemeColorList[MxgThemeType::PivotMark] = QColor(0x4C, 0xA0, 0xE0);

    //ElaPopularCard
    m_lightThemeColorList[MxgThemeType::PopularCardBorder] = QColor(0xEA, 0xEA, 0xED);
    m_darkThemeColorList[MxgThemeType::PopularCardBorder] = QColor(0x26, 0x24, 0x2A);
    m_lightThemeColorList[MxgThemeType::PopularCardFloaterBorder] = QColor(0xBE, 0xBA, 0xBE);
    m_darkThemeColorList[MxgThemeType::PopularCardFloaterBorder] = QColor(0x52, 0x50, 0x52);
    m_lightThemeColorList[MxgThemeType::PopularCardBase] = QColor(0xFD, 0xFD, 0xFE);
    m_darkThemeColorList[MxgThemeType::PopularCardBase] = QColor(0x34, 0x30, 0x39);
    m_lightThemeColorList[MxgThemeType::PopularCardInteractiveTipsBase] = QColor(0xE6, 0xE6, 0xE6);
    m_darkThemeColorList[MxgThemeType::PopularCardInteractiveTipsBase] = QColor(0x2B, 0x2C, 0x36);
    m_lightThemeColorList[MxgThemeType::PopularCardInteractiveTips] = Qt::black;
    m_darkThemeColorList[MxgThemeType::PopularCardInteractiveTips] = Qt::white;
    m_lightThemeColorList[MxgThemeType::PopularCardFloaterBaseLine] = QColor(0xF1, 0xF1, 0xF1);
    m_darkThemeColorList[MxgThemeType::PopularCardFloaterBaseLine] = QColor(0x50, 0x50, 0x50);
    m_lightThemeColorList[MxgThemeType::PopularCardDetailedText] = QColor(0x87, 0x87, 0x87);
    m_darkThemeColorList[MxgThemeType::PopularCardDetailedText] = QColor(0xAD, 0xAD, 0xB0);

    //ElaProgressBar
    m_lightThemeColorList[MxgThemeType::ProgressBarBase] = QColor(0xD6, 0xD6, 0xD6);
    m_darkThemeColorList[MxgThemeType::ProgressBarBase] = QColor(0x63, 0x63, 0x63);
    m_lightThemeColorList[MxgThemeType::ProgressBarContentsBase] = QColor(0x00, 0x66, 0xB4);
    m_darkThemeColorList[MxgThemeType::ProgressBarContentsBase] = QColor(0x4C, 0xA0, 0xE0);

    //ElaPromotionCard
    m_lightThemeColorList[MxgThemeType::PromotionCardDefaultHighlightStart] = QColor(0xFF, 0xFF, 0xFF, 40);
    m_darkThemeColorList[MxgThemeType::PromotionCardDefaultHighlightStart] = QColor(0xFF, 0xFF, 0xFF, 40);
    m_lightThemeColorList[MxgThemeType::PromotionCardDefaultHighlightEnd] = QColor(0xFF, 0xFF, 0xFF, 0);
    m_darkThemeColorList[MxgThemeType::PromotionCardDefaultHighlightEnd] = QColor(0xFF, 0xFF, 0xFF, 0);

    //ElaPromotionView
    m_lightThemeColorList[MxgThemeType::PromotionViewIndicator] = QColor(0x75, 0x7C, 0x87);
    m_darkThemeColorList[MxgThemeType::PromotionViewIndicator] = QColor(0x75, 0x7C, 0x87);

    //ElaPushButton
    m_lightThemeColorList[MxgThemeType::PushButtonBorder] = QColor(0xDF, 0xDF, 0xDF);
    m_darkThemeColorList[MxgThemeType::PushButtonBorder] = Qt::transparent;
    m_lightThemeColorList[MxgThemeType::PushButtonHemline] = QColor(0xBC, 0xBC, 0xBC);
    m_darkThemeColorList[MxgThemeType::PushButtonHemline] = QColor(0x42, 0x42, 0x42);
    m_lightThemeColorList[MxgThemeType::PushButtonDefaultBase] = QColor(0xFE, 0xFE, 0xFE);
    m_darkThemeColorList[MxgThemeType::PushButtonDefaultBase] = QColor(0x3E, 0x3E, 0x3E);
    m_lightThemeColorList[MxgThemeType::PushButtonDefaultHover] = QColor(0xF6, 0xF6, 0xF6);
    m_darkThemeColorList[MxgThemeType::PushButtonDefaultHover] = QColor(0x4F, 0x4F, 0x4F);
    m_lightThemeColorList[MxgThemeType::PushButtonDefaultPress] = QColor(0xF2, 0xF2, 0xF2);
    m_darkThemeColorList[MxgThemeType::PushButtonDefaultPress] = QColor(0x1C, 0x1C, 0x1C);
    m_lightThemeColorList[MxgThemeType::PushButtonDefaultText] = Qt::black;
    m_darkThemeColorList[MxgThemeType::PushButtonDefaultText] = Qt::white;
    m_lightThemeColorList[MxgThemeType::PushButtonDisableBase] = QColor(0xF4, 0xF4, 0xF4);
    m_darkThemeColorList[MxgThemeType::PushButtonDisableBase] = QColor(0x3B, 0x3B, 0x3B);

    //ElaRadioButton
    m_lightThemeColorList[MxgThemeType::RadioButtonStateOffBorder] = QColor(0x94, 0x94, 0x94);
    m_darkThemeColorList[MxgThemeType::RadioButtonStateOffBorder] = QColor(0x94, 0x94, 0x94);
    m_lightThemeColorList[MxgThemeType::RadioButtonStateOffBase] = Qt::white;
    m_darkThemeColorList[MxgThemeType::RadioButtonStateOffBase] = Qt::white;
    m_lightThemeColorList[MxgThemeType::RadioButtonStateOffHover] = QColor(0xDE, 0xDE, 0xDE);
    m_darkThemeColorList[MxgThemeType::RadioButtonStateOffHover] = QColor(0xDE, 0xDE, 0xDE);
    m_lightThemeColorList[MxgThemeType::RadioButtonStateOnBase] = QColor(0x00, 0x66, 0xB4);
    m_darkThemeColorList[MxgThemeType::RadioButtonStateOnBorder] = Qt::transparent;
    m_lightThemeColorList[MxgThemeType::RadioButtonStateOnBorder] = Qt::transparent;
    m_darkThemeColorList[MxgThemeType::RadioButtonStateOnBase] = QColor(0x00, 0x66, 0xB4);
    m_lightThemeColorList[MxgThemeType::RadioButtonStateOnCenter] = QColor(0xEA, 0xEA, 0xEB);
    m_darkThemeColorList[MxgThemeType::RadioButtonStateOnCenter] = QColor(0xEA, 0xEA, 0xEB);

    //ElaReminderCard
    m_lightThemeColorList[MxgThemeType::ReminderCardBorder] = Qt::transparent;
    m_darkThemeColorList[MxgThemeType::ReminderCardBorder] = QColor(0x43, 0x43, 0x43);
    m_lightThemeColorList[MxgThemeType::ReminderCardBase] = QColor(0xFB, 0xFB, 0xFD);
    m_darkThemeColorList[MxgThemeType::ReminderCardBase] = QColor(0x23, 0x22, 0x24);
    m_lightThemeColorList[MxgThemeType::ReminderCardHover] = QColor(0xE9, 0xE9, 0xF0);
    m_darkThemeColorList[MxgThemeType::ReminderCardHover] = QColor(0x47, 0x46, 0x47);
    m_lightThemeColorList[MxgThemeType::ReminderCardMark] = QColor(0x00, 0x67, 0xC0);
    m_darkThemeColorList[MxgThemeType::ReminderCardMark] = QColor(0x4C, 0xA0, 0xE0);
    m_lightThemeColorList[MxgThemeType::ReminderCardSubTitleText] = Qt::black;
    m_darkThemeColorList[MxgThemeType::ReminderCardSubTitleText] = QColor(0x79, 0x72, 0x68);

    //ElaScrollBar
    m_lightThemeColorList[MxgThemeType::ScrollBarBase] = QColor(0xF1, 0xF2, 0xF3);
    m_darkThemeColorList[MxgThemeType::ScrollBarBase] = QColor(0x38, 0x38, 0x38);
    m_lightThemeColorList[MxgThemeType::ScrollBarHandle] = QColor(0x8A, 0x84, 0x89);
    m_darkThemeColorList[MxgThemeType::ScrollBarHandle] = QColor(0x9F, 0x9F, 0x9F);

    //ElaScrollPageArea
    m_lightThemeColorList[MxgThemeType::ScrollPageAreaBorder] = QColor(0xDF, 0xDF, 0xDF);
    m_darkThemeColorList[MxgThemeType::ScrollPageAreaBorder] = QColor(0x37, 0x37, 0x37);
    m_lightThemeColorList[MxgThemeType::ScrollPageAreaBase] = QColor(0xFB, 0xFB, 0xFD);
    m_darkThemeColorList[MxgThemeType::ScrollPageAreaBase] = QColor(0x23, 0x22, 0x24);

    //ElaSlider
    m_lightThemeColorList[MxgThemeType::SliderBaseNoValue] = QColor(0xCF, 0xCF, 0xCF);
    m_darkThemeColorList[MxgThemeType::SliderBaseNoValue] = QColor(0x63, 0x63, 0x63);
    m_lightThemeColorList[MxgThemeType::SliderBaseHasValue] = QColor(0x00, 0x66, 0xB4);
    m_darkThemeColorList[MxgThemeType::SliderBaseHasValue] = QColor(0x4C, 0xA0, 0xE0);
    m_lightThemeColorList[MxgThemeType::SliderHandleBase] = QColor(0x00, 0x66, 0xB4);
    m_darkThemeColorList[MxgThemeType::SliderHandleBase] = QColor(0x4C, 0xA0, 0xE0);
    m_lightThemeColorList[MxgThemeType::SliderHandleCenter] = QColor(0xEA, 0xEA, 0xEB);
    m_darkThemeColorList[MxgThemeType::SliderHandleCenter] = QColor(0xEA, 0xEA, 0xEB);

    //ElaSpinBox ElaDoubleSpinBox
    m_lightThemeColorList[MxgThemeType::SpinBoxBase] = Qt::white;
    m_darkThemeColorList[MxgThemeType::SpinBoxBase] = QColor(0x24, 0x24, 0x24);
    m_lightThemeColorList[MxgThemeType::SpinBoxButtonBase] = QColor(0xE8, 0xE8, 0xE8);
    m_darkThemeColorList[MxgThemeType::SpinBoxButtonBase] = QColor(0x38, 0x38, 0x38);
    m_lightThemeColorList[MxgThemeType::SpinBoxButtonHover] = QColor(0xE0, 0xE0, 0xE0);
    m_darkThemeColorList[MxgThemeType::SpinBoxButtonHover] = QColor(0x40, 0x40, 0x40);
    m_lightThemeColorList[MxgThemeType::SpinBoxButtonPress] = QColor(0xD8, 0xD8, 0xD8);
    m_darkThemeColorList[MxgThemeType::SpinBoxButtonPress] = QColor(0x48, 0x48, 0x48);
    m_lightThemeColorList[MxgThemeType::SpinBoxMarkNoFocus] = QColor(0xB7, 0xB7, 0xB7);
    m_darkThemeColorList[MxgThemeType::SpinBoxMarkNoFocus] = QColor(0xA6, 0xA6, 0xA6);
    m_lightThemeColorList[MxgThemeType::SpinBoxMarkHasFocus] = QColor(0x00, 0x66, 0xB4);
    m_darkThemeColorList[MxgThemeType::SpinBoxMarkHasFocus] = QColor(0x4C, 0xA0, 0xE0);

    //ElaStatusBar
    m_lightThemeColorList[MxgThemeType::StatusBarBase] = QColor(0xFC, 0xF7, 0xFC);
    m_darkThemeColorList[MxgThemeType::StatusBarBase] = QColor(0x40, 0x40, 0x40);
    m_lightThemeColorList[MxgThemeType::StatusBarBorder] = QColor(0xE8, 0xE2, 0xEA);
    m_darkThemeColorList[MxgThemeType::StatusBarBorder] = Qt::transparent;
    m_lightThemeColorList[MxgThemeType::StatusBarSeparator] = QColor(0x0E, 0x6F, 0xC3);
    m_darkThemeColorList[MxgThemeType::StatusBarSeparator] = QColor(0x4C, 0xA0, 0xE0);

    //ElaSuggestBox
    m_lightThemeColorList[MxgThemeType::SuggestBoxViewItemHover] = QColor(0xE9, 0xE9, 0xF0);
    m_darkThemeColorList[MxgThemeType::SuggestBoxViewItemHover] = QColor(0x27, 0x27, 0x27);
    m_lightThemeColorList[MxgThemeType::SuggestBoxViewItemSelected] = QColor(0xE9, 0xE9, 0xF0);
    m_darkThemeColorList[MxgThemeType::SuggestBoxViewItemSelected] = QColor(0x35, 0x35, 0x35);
    m_lightThemeColorList[MxgThemeType::SuggestBoxViewItemSelectedHover] = QColor(0xED, 0xEC, 0xF3);
    m_darkThemeColorList[MxgThemeType::SuggestBoxViewItemSelectedHover] = QColor(0x2F, 0x2F, 0x2F);
    m_lightThemeColorList[MxgThemeType::SuggestBoxSearchViewContainerBorder] = QColor(0xDF, 0xDF, 0xDF);
    m_darkThemeColorList[MxgThemeType::SuggestBoxSearchViewContainerBorder] = QColor(0x37, 0x37, 0x37);
    m_lightThemeColorList[MxgThemeType::SuggestBoxSearchViewContainerBase] = QColor(0xF6, 0xF6, 0xFA);
    m_darkThemeColorList[MxgThemeType::SuggestBoxSearchViewContainerBase] = QColor(0x32, 0x32, 0x32);

    //ElaTabBar ElaTabWidget
    m_lightThemeColorList[MxgThemeType::TabBarCloseButtonHover] = QColor(0xDC, 0xDC, 0xDD);
    m_darkThemeColorList[MxgThemeType::TabBarCloseButtonHover] = QColor(0x5C, 0x5A, 0x56);
    m_lightThemeColorList[MxgThemeType::TabBarTabBase] = QColor(0xF5, 0xF1, 0xF8);
    m_darkThemeColorList[MxgThemeType::TabBarTabBase] = QColor(0x1A, 0x1A, 0x1A);
    m_lightThemeColorList[MxgThemeType::TabBarTabHover] = QColor(0xFC, 0xF8, 0xFF);
    m_darkThemeColorList[MxgThemeType::TabBarTabHover] = QColor(0x27, 0x27, 0x27);
    m_lightThemeColorList[MxgThemeType::TabBarTabSelected] = Qt::white;
    m_darkThemeColorList[MxgThemeType::TabBarTabSelected] = QColor(0x2D, 0x2D, 0x2D);
    m_lightThemeColorList[MxgThemeType::TabBarTabMark] = QColor(0x0E, 0x6F, 0xC3);
    m_darkThemeColorList[MxgThemeType::TabBarTabMark] = QColor(0x4C, 0xA0, 0xE0);
    m_lightThemeColorList[MxgThemeType::TabBarPanelButtonToolHover] = QColor(0xE9, 0xE9, 0xF0);
    m_darkThemeColorList[MxgThemeType::TabBarPanelButtonToolHover] = QColor(0x2B, 0x2C, 0x36);
    m_lightThemeColorList[MxgThemeType::TabBarPanelButtonToolPress] = QColor(0xE9, 0xE9, 0xF0);
    m_darkThemeColorList[MxgThemeType::TabBarPanelButtonToolPress] = QColor(0x2B, 0x2C, 0x36);

    //ElaTableView
    m_lightThemeColorList[MxgThemeType::TableViewBase] = QColor(0xF0, 0xF0, 0xF5);
    m_darkThemeColorList[MxgThemeType::TableViewBase] = QColor(0x2D, 0x2D, 0x2D);
    m_lightThemeColorList[MxgThemeType::TableViewHeaderBase] = QColor(0xD6, 0xD6, 0xDB);
    m_darkThemeColorList[MxgThemeType::TableViewHeaderBase] = QColor(0x4F, 0x4F, 0x4F);
    m_lightThemeColorList[MxgThemeType::TableViewHeaderHover] = QColor(0xCF, 0xCF, 0xD4);
    m_darkThemeColorList[MxgThemeType::TableViewHeaderHover] = QColor(0x6E, 0x6E, 0x6E);
    m_lightThemeColorList[MxgThemeType::TableViewHeaderSelected] = QColor(0xCF, 0xCF, 0xD4);
    m_darkThemeColorList[MxgThemeType::TableViewHeaderSelected] = QColor(0x6E, 0x6E, 0x6E);
    m_lightThemeColorList[MxgThemeType::TableViewHeaderSelectedHover] = QColor(0xCA, 0xCA, 0xCF);
    m_darkThemeColorList[MxgThemeType::TableViewHeaderSelectedHover] = QColor(0x66, 0x66, 0x66);
    m_lightThemeColorList[MxgThemeType::TableViewAlternatingRow] = QColor(0xF5, 0xF5, 0xFA);
    m_darkThemeColorList[MxgThemeType::TableViewAlternatingRow] = QColor(0x33, 0x33, 0x33);
    m_lightThemeColorList[MxgThemeType::TableViewBorder] = QColor(0xBE, 0xBA, 0xBE);
    m_darkThemeColorList[MxgThemeType::TableViewBorder] = QColor(0x52, 0x50, 0x52);
    m_lightThemeColorList[MxgThemeType::TableViewItemHover] = QColor(0xE4, 0xE4, 0xEB);
    m_darkThemeColorList[MxgThemeType::TableViewItemHover] = QColor(0x40, 0x40, 0x40);
    m_lightThemeColorList[MxgThemeType::TableViewItemSelected] = QColor(0xE4, 0xE4, 0xEB);
    m_darkThemeColorList[MxgThemeType::TableViewItemSelected] = QColor(0x40, 0x40, 0x40);

    //ElaToggleButton
    m_lightThemeColorList[MxgThemeType::ToggleButtonNoToggledBorder] = QColor(0xDF, 0xDF, 0xDF);
    m_darkThemeColorList[MxgThemeType::ToggleButtonNoToggledBorder] = QColor(0x50, 0x50, 0x50);
    m_lightThemeColorList[MxgThemeType::ToggleButtonNoToggledBase] = QColor(0xFE, 0xFE, 0xFE);
    m_darkThemeColorList[MxgThemeType::ToggleButtonNoToggledBase] = QColor(0x3E, 0x3E, 0x3E);
    m_lightThemeColorList[MxgThemeType::ToggleButtonNoToggledPress] = QColor(0xF2, 0xF2, 0xF2);
    m_darkThemeColorList[MxgThemeType::ToggleButtonNoToggledPress] = QColor(0x4D, 0x4D, 0x4D);
    m_lightThemeColorList[MxgThemeType::ToggleButtonNoToggledHover] = QColor(0xF6, 0xF6, 0xF6);
    m_darkThemeColorList[MxgThemeType::ToggleButtonNoToggledHover] = QColor(0x44, 0x44, 0x44);
    m_lightThemeColorList[MxgThemeType::ToggleButtonNoToggledText] = QColor(0x45, 0x44, 0x41);
    m_darkThemeColorList[MxgThemeType::ToggleButtonNoToggledText] = QColor(0xFE, 0xFE, 0xFE);
    m_lightThemeColorList[MxgThemeType::ToggleButtonToggledBorder] = Qt::transparent;
    m_darkThemeColorList[MxgThemeType::ToggleButtonToggledBorder] = Qt::transparent;
    m_lightThemeColorList[MxgThemeType::ToggleButtonToggledBase] = QColor(0x00, 0x66, 0xB9);
    m_darkThemeColorList[MxgThemeType::ToggleButtonToggledBase] = QColor(0x4C, 0xA0, 0xE0);
    m_lightThemeColorList[MxgThemeType::ToggleButtonToggledPress] = QColor(0x00, 0x7A, 0xD8);
    m_darkThemeColorList[MxgThemeType::ToggleButtonToggledPress] = QColor(0x00, 0x7A, 0xD8);
    m_lightThemeColorList[MxgThemeType::ToggleButtonToggledHover] = QColor(0x00, 0x70, 0xC6);
    m_darkThemeColorList[MxgThemeType::ToggleButtonToggledHover] = QColor(0x4C, 0xA0, 0xE0);
    m_lightThemeColorList[MxgThemeType::ToggleButtonToggledText] = QColor(0xFD, 0xFD, 0xFD);
    m_darkThemeColorList[MxgThemeType::ToggleButtonToggledText] = QColor(0x01, 0x01, 0x02);
    m_lightThemeColorList[MxgThemeType::ToggleButtonHemline] = QColor(0xBC, 0xBC, 0xBC);
    m_darkThemeColorList[MxgThemeType::ToggleButtonHemline] = QColor(0x52, 0x52, 0x52);
    m_lightThemeColorList[MxgThemeType::ToggleButtonDisableBase] = QColor(0xF4, 0xF4, 0xF4);
    m_darkThemeColorList[MxgThemeType::ToggleButtonDisableBase] = QColor(0x3B, 0x3B, 0x3B);

    //ElaToggleSwitch
    m_lightThemeColorList[MxgThemeType::ToggleSwitchNoToggledBorder] = QColor(0xA5, 0xA5, 0xA7);
    m_darkThemeColorList[MxgThemeType::ToggleSwitchNoToggledBorder] = QColor(0xA1, 0xA1, 0xA1);
    m_lightThemeColorList[MxgThemeType::ToggleSwitchNoToggledBase] = QColor(0xFD, 0xFD, 0xFD);
    m_darkThemeColorList[MxgThemeType::ToggleSwitchNoToggledBase] = QColor(0x32, 0x32, 0x32);
    m_lightThemeColorList[MxgThemeType::ToggleSwitchNoToggledHover] = QColor(0xF0, 0xF0, 0xF0);
    m_darkThemeColorList[MxgThemeType::ToggleSwitchNoToggledHover] = QColor(0x3E, 0x3E, 0x3E);
    m_lightThemeColorList[MxgThemeType::ToggleSwitchNoToggledCenter] = QColor(0x5D, 0x5D, 0x60);
    m_darkThemeColorList[MxgThemeType::ToggleSwitchNoToggledCenter] = QColor(0xD0, 0xD0, 0xD0);
    m_lightThemeColorList[MxgThemeType::ToggleSwitchToggledBorder] = QColor(0x00, 0x64, 0xB0);
    m_darkThemeColorList[MxgThemeType::ToggleSwitchToggledBorder] = Qt::transparent;
    m_lightThemeColorList[MxgThemeType::ToggleSwitchToggledBase] = QColor(0x00, 0x64, 0xB0);
    m_darkThemeColorList[MxgThemeType::ToggleSwitchToggledBase] = QColor(0x4C, 0xA0, 0xE0);
    m_lightThemeColorList[MxgThemeType::ToggleSwitchToggledCenter] = QColor(0xFD, 0xFF, 0xF3);
    m_darkThemeColorList[MxgThemeType::ToggleSwitchToggledCenter] = QColor(0x00, 0x00, 0x00);
    m_lightThemeColorList[MxgThemeType::ToggleSwitchDisableBase] = QColor(0xE9, 0xE9, 0xE9);
    m_darkThemeColorList[MxgThemeType::ToggleSwitchDisableBase] = QColor(0x52, 0x52, 0x52);
    m_lightThemeColorList[MxgThemeType::ToggleSwitchDisableCenter] = QColor(0x96, 0x96, 0x96);
    m_darkThemeColorList[MxgThemeType::ToggleSwitchDisableCenter] = QColor(0x32, 0x32, 0x32);

    //ElaToolBar
    m_lightThemeColorList[MxgThemeType::ToolBarExpandButtonHover] = QColor(0xE9, 0xE9, 0xF0);
    m_darkThemeColorList[MxgThemeType::ToolBarExpandButtonHover] = QColor(0x40, 0x40, 0x40);
    m_lightThemeColorList[MxgThemeType::ToolBarWindowBorder] = QColor(0xBE, 0xBA, 0xBE);
    m_darkThemeColorList[MxgThemeType::ToolBarWindowBorder] = QColor(0x52, 0x50, 0x52);
    m_lightThemeColorList[MxgThemeType::ToolBarWindowBase] = QColor(0xF5, 0xF1, 0xF8);
    m_darkThemeColorList[MxgThemeType::ToolBarWindowBase] = QColor(0x1A, 0x1A, 0x1A);
    m_lightThemeColorList[MxgThemeType::ToolBarSeparator] = QColor(0x0E, 0x6F, 0xC3);
    m_darkThemeColorList[MxgThemeType::ToolBarSeparator] = QColor(0x4C, 0xA0, 0xE0);
    m_lightThemeColorList[MxgThemeType::ToolBarHandle] = QColor(0x0E, 0x6F, 0xC3);
    m_darkThemeColorList[MxgThemeType::ToolBarHandle] = QColor(0x4C, 0xA0, 0xE0);

    //ElaToolButton
    m_lightThemeColorList[MxgThemeType::ToolButtonBorder] = QColor(0xD1, 0xD1, 0xD3);
    m_darkThemeColorList[MxgThemeType::ToolButtonBorder] = QColor(0x3B, 0x3B, 0x40);
    m_lightThemeColorList[MxgThemeType::ToolButtonBase] = QColor(0xFD, 0xFD, 0xFE);
    m_darkThemeColorList[MxgThemeType::ToolButtonBase] = QColor(0x33, 0x33, 0x3B);
    m_lightThemeColorList[MxgThemeType::ToolButtonHover] = QColor(0xF7, 0xF7, 0xFA);
    m_darkThemeColorList[MxgThemeType::ToolButtonHover] = QColor(0x3C, 0x3C, 0x42);
    m_lightThemeColorList[MxgThemeType::ToolButtonTransparentHover] = QColor(0xE5, 0xE4, 0xEB);
    m_darkThemeColorList[MxgThemeType::ToolButtonTransparentHover] = QColor(0x40, 0x40, 0x40);
    m_lightThemeColorList[MxgThemeType::ToolButtonPress] = QColor(0xF3, 0xF2, 0xF5);
    m_darkThemeColorList[MxgThemeType::ToolButtonPress] = QColor(0x2D, 0x2D, 0x34);
    m_lightThemeColorList[MxgThemeType::ToolButtonTransparentPress] = QColor(0xEA, 0xE9, 0xF0);
    m_darkThemeColorList[MxgThemeType::ToolButtonTransparentPress] = QColor(0x33, 0x33, 0x33);
    m_lightThemeColorList[MxgThemeType::ToolButtonIndicator] = QColor(0xE0, 0xE0, 0xE0);
    m_darkThemeColorList[MxgThemeType::ToolButtonIndicator] = QColor(0x40, 0x40, 0x40);

    //ElaWindow
    m_lightThemeColorList[MxgThemeType::WindowText] = Qt::black;
    m_darkThemeColorList[MxgThemeType::WindowText] = Qt::white;
    m_lightThemeColorList[MxgThemeType::WindowTextDisable] = Qt::gray;
    m_darkThemeColorList[MxgThemeType::WindowTextDisable] = Qt::gray;
    m_lightThemeColorList[MxgThemeType::WindowTextPress] = QColor(0x5A, 0x5A, 0x5D);
    m_darkThemeColorList[MxgThemeType::WindowTextPress] = QColor(0xBB, 0xBB, 0xBF);
    m_lightThemeColorList[MxgThemeType::WindowBaseStart] = QColor(0xF2, 0xF2, 0xF9);
    m_darkThemeColorList[MxgThemeType::WindowBaseStart] = QColor(0x1F, 0x1F, 0x2B);
    m_lightThemeColorList[MxgThemeType::WindowBaseEnd] = QColor(0xF4, 0xF1, 0xF9);
    m_darkThemeColorList[MxgThemeType::WindowBaseEnd] = QColor(0x1F, 0x1F, 0x29);
    m_lightThemeColorList[MxgThemeType::WindowBaseLine] = QColor(0xE4, 0xE4, 0xEA);
    m_darkThemeColorList[MxgThemeType::WindowBaseLine] = QColor(0x26, 0x2B, 0x2F);
    m_lightThemeColorList[MxgThemeType::WindowDockWidgetResizeHandle] = QColor(0x0E, 0x6F, 0xC3);
    m_darkThemeColorList[MxgThemeType::WindowDockWidgetResizeHandle] = QColor(0x4C, 0xA0, 0xE0);
    m_lightThemeColorList[MxgThemeType::WindowDockWidgetResizeHandleHover] = QColor(0x6F, 0xAA, 0xDE);
    m_darkThemeColorList[MxgThemeType::WindowDockWidgetResizeHandleHover] = QColor(0x6F, 0xAA, 0xDE);
    m_lightThemeColorList[MxgThemeType::WindowRubberBand] = QColor(0xFF, 0xFF, 0xFF, 128);
    m_darkThemeColorList[MxgThemeType::WindowRubberBand] = QColor(0x85, 0x85, 0x85, 128);
    m_lightThemeColorList[MxgThemeType::WindowTabBarBase] = QColor(0xF5, 0xF1, 0xF8);
    m_darkThemeColorList[MxgThemeType::WindowTabBarBase] = QColor(0x1A, 0x1A, 0x1A);
    m_lightThemeColorList[MxgThemeType::WindowTabBarHover] = QColor(0xFC, 0xF8, 0xFF);
    m_darkThemeColorList[MxgThemeType::WindowTabBarHover] = QColor(0x27, 0x27, 0x27);
    m_lightThemeColorList[MxgThemeType::WindowTabBarSelected] = Qt::white;
    m_darkThemeColorList[MxgThemeType::WindowTabBarSelected] = QColor(0x2D, 0x2D, 0x2D);
    m_lightThemeColorList[MxgThemeType::WindowTabBarSeparator] = QColor(0x0E, 0x6F, 0xC3);
    m_darkThemeColorList[MxgThemeType::WindowTabBarSeparator] = QColor(0x4C, 0xA0, 0xE0);
    m_lightThemeColorList[MxgThemeType::WindowCentralStackBaseStart] = QColor(0xF9, 0xF9, 0xFC);
    m_darkThemeColorList[MxgThemeType::WindowCentralStackBaseStart] = QColor(0x24, 0x29, 0x2D);
    m_lightThemeColorList[MxgThemeType::WindowCentralStackBaseEnd] = QColor(0xFA, 0xF8, 0xFC);
    m_darkThemeColorList[MxgThemeType::WindowCentralStackBaseEnd] = QColor(0x2E, 0x26, 0x33);

}


