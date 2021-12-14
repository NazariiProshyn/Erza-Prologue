#include "Game.h"

namespace NSParametrs
{
    const unsigned int windowHeight = 1080;
    const unsigned int windowWidth = 1920;
    const unsigned int speedClock = 300;
};

void Game::Run()
{
    
        sf::RenderWindow window(sf::VideoMode(NSParametrs::windowWidth, NSParametrs::windowHeight), 
            "Erza:prologue",sf::Style::Fullscreen);
        sf::Clock clock;
        
        while (window.isOpen())
        {
            time = clock.getElapsedTime().asMicroseconds();
            clock.restart();
            time = time / NSParametrs::speedClock;
            sf::Event event;
            while (window.pollEvent(event))
            {
                
                if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)
                    || (!lvlsHandler.isWindowOpen())) 
                {
                    window.close();
                }
                
                lvlsHandler.eventHandler(event, time);
            }

            window.clear();


            for (size_t i = 0; i < lvlsHandler.getRaws(); ++i)
            {
                for (size_t j = 0; j < lvlsHandler.getColumns(); ++j)
                {
                    window.draw(lvlsHandler.getBackground(i,j));

                }
            }

            for (size_t i = 0; i < lvlsHandler.getRaws(); ++i)
            {
                for (size_t j = 0; j < lvlsHandler.getColumns(); ++j)
                {
                    if (lvlsHandler.checkForObjects(i, j))
                    {
                        window.draw(lvlsHandler.getObjects(i, j));
                    }
                    if (lvlsHandler.checkPosition(i, j))
                    {
                        window.draw(lvlsHandler.getHero());
                    }
                }
            }

            for (size_t i = 0; i < lvlsHandler.getRaws(); ++i)
            {
                for (size_t j = 0; j < lvlsHandler.getColumns(); ++j)
                {
                    if (lvlsHandler.checkPosition(i, j))
                    {
                        window.draw(lvlsHandler.getHero());
                    }
                }
            }
            

            for (size_t i = 0; i < lvlsHandler.getNumOfAddItems(); ++i)
            {
                window.draw(lvlsHandler.getAddText(i).getString());
            }

            for(size_t i = 0; i < lvlsHandler.getNumOfItems(); ++i)
            {
                window.draw(lvlsHandler.getText(i).getString());
            }

            window.display();
        }
    
}
