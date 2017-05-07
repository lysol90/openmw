#ifndef CSV_PREFS_KEYBINDINGPAGE_H
#define CSV_PREFS_KEYBINDINGPAGE_H

#include "pagebase.hpp"

class QWidget;
class QComboBox;
class QGridLayout;
class QStackedLayout;

namespace CSMPrefs
{
    class Setting;
}

namespace CSVPrefs
{
    class KeyBindingPage : public PageBase
    {
            Q_OBJECT

        public:

            KeyBindingPage(CSMPrefs::Category& category, QWidget* parent);

            void addSetting(CSMPrefs::Setting* setting);

        private:

            void refresh();

            void init();

            QWidget* mTopWidget;
            QStackedLayout* mStackedLayout;
            QGridLayout* mPageLayout;
            QComboBox* mPageSelector;
    };
}

#endif
