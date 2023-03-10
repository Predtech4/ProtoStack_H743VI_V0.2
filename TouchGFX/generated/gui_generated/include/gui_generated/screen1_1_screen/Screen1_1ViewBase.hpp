/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN1_1VIEWBASE_HPP
#define SCREEN1_1VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen1_1_screen/Screen1_1Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/containers/ScrollableContainer.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/TextArea.hpp>

#define NUMBER_OF_OPTIONS 7
#define MENU_ITEM_BORDER 5
#define MENU_ITEM_HEIGHT 50

class Screen1_1ViewBase : public touchgfx::View<Screen1_1Presenter>
{
public:
    Screen1_1ViewBase();
    virtual ~Screen1_1ViewBase() {}
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void scrollWindow(int8_t scrollAmount)
    {
        // Override and implement this function in Screen1
    }

    uint8_t currentMenuPos = 0;
    const uint8_t NESTED_LEVEL = 1;

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */

    touchgfx::ScrollableContainer ScrollableMenu;
    touchgfx::BoxWithBorder MenuBoxes[NUMBER_OF_OPTIONS];
    touchgfx::TextArea MenuTexts[NUMBER_OF_OPTIONS];

private:
};

#endif // SCREEN1_1VIEWBASE_HPP
