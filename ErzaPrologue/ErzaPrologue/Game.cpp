#include "Game.h"

namespace NSParametrs
{
    const unsigned int windowHeight = 1080;
    const unsigned int windowWidth = 1920;
};

void Game::Run()
{
    
        sf::RenderWindow window(sf::VideoMode(NSParametrs::windowWidth, NSParametrs::windowHeight), 
            "Erza:prologue",sf::Style::Fullscreen);//Use Style::FullScreen


        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)
                    || (!lvlsHandler.isWindowOpen())) 
                {
                    window.close();
                }
                
                lvlsHandler.eventHandler(event);
            }
            window.clear();

            window.draw(lvlsHandler.getSprite());

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
