
#include "window.h"

using namespace sf;

void menu(RenderWindow &window)
{
    Texture menuBackground;

    menuBackground.loadFromFile("images/fon.jpg");
    Sprite menuBg(menuBackground);
    bool isMenu = 1;

    menuBg.setPosition(0, 0);
    /////////////////////////////////////////////////
    while (isMenu)
    {

        menuNum = 0;

        if (IntRect(20, 55, 560, 80).contains(Mouse::getPosition(window)))
        {

            menuNum = 1;
        }
        if (IntRect(20, 182, 296, 80).contains(Mouse::getPosition(window)))
        {

            menuNum = 2;
        }

        if (IntRect(20, 310, 260, 90).contains(Mouse::getPosition(window)))
        {

            menuNum = 3;
        }
        if (Mouse::isButtonPressed(Mouse::Left))
        {
            if (menuNum == 1)
                isMenu = false;
            if (menuNum == 2)
            {
                window.close();
                isMenu = false;
            }
            if (menuNum == 3)
            {
                window.close();
                isMenu = false;
            }
        }
        window.draw(menuBg);

        window.display();
    }
    ////////////////////////////////////////////////////
}