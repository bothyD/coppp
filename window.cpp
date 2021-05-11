#include <SFML/Graphics.hpp>
using namespace sf;
int menuNum = 0;
int menuNum1 = 0;
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

void menu1(RenderWindow &window)
{
    Texture menuBackground1;

    menuBackground1.loadFromFile("images/fon1.jpg");
    Sprite menuBg1(menuBackground1);
    bool isMenu1 = 1;

    menuBg1.setPosition(0, 0);
    ////////////////////////////////////////////////
    while (isMenu1)
    {
        if (Keyboard::isKeyPressed(Keyboard::Escape)){
            menu(window);
            while (window.isOpen())
            {
                Event event;
                while (window.pollEvent(event))
                {
                    if (event.type == Event::Closed)
                        window.close();
                }
                if (menuNum == 1)
                {
                    menu1(window);
                    while (window.isOpen())
                    {
                        Event event;
                        while (window.pollEvent(event))
                        {
                            if (event.type == Event::Closed)
                                window.close();
                        }
                        if (menuNum1 == 1)
                        {
                            menu(window);
                            
                        }
                        if (menuNum1 == 2)
                        {
                            menu(window);
                            
                        }

                        if (menuNum1 == 1)
                        {
                            menu(window);
                            
                        }

                        window.clear();

                        window.display();
                    }
                    /* if(menuNum==2)
            {

            }*/
                }
                window.clear();
                window.display();
            }
        }
        menuNum1 = 0;

        if (IntRect(350, 100, 220, 85).contains(Mouse::getPosition(window)))
        {

            menuNum1 = 1;
        }
        if (IntRect(300, 225, 300, 85).contains(Mouse::getPosition(window)))
        {

            menuNum1 = 2;
        }
        if (IntRect(330, 360, 250, 85).contains(Mouse::getPosition(window)))
        {

            menuNum1 = 3;
        }
        if (Mouse::isButtonPressed(Mouse::Left))
        {
            if (menuNum1 == 1)
            {
                window.close();
                isMenu1 = false;
            }
            if (menuNum1 == 2)
            {
                window.close();
                isMenu1 = false;
            }
            if (menuNum1 == 3)
            {
                window.close();
                isMenu1 = false;
            }
        }
        window.draw(menuBg1);

        window.display();
    }
    ////////////////////////////////////////////////////
}

int main()
{
    sf::RenderWindow window(VideoMode(1050, 660), "KeyBoardNinja");
    
    menu(window);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }
        if(menuNum==1)
        {
            menu1(window);
            while (window.isOpen())
            {
                Event event;
                while (window.pollEvent(event))
                {
                    if (event.type == Event::Closed)
                        window.close();
                }
                if (menuNum1 == 1)
                {
                    menu(window);
                    break;
                    
                }
                if (menuNum1 == 2)
                {
                    menu(window);
                    break;
                }

                if (menuNum1 == 1)
                {
                    menu(window);
                    break;
                }

                window.clear();

                window.display();
            }
           /* if(menuNum==2)
            {

            }*/
        }
        window.clear();
        window.display();
    }
    return 0;
}