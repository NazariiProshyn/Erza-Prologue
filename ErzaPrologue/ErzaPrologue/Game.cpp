#include "Game.h"

namespace NSParametrs
{
    const unsigned int windowHeight = 1080;
    const unsigned int windowWidth = 1920;
};

void Game::Run()
{
    
        sf::RenderWindow window(sf::VideoMode(NSParametrs::windowWidth, NSParametrs::windowHeight), 
            "Erza:prologue",sf::Style::Default);//Use Style::FullScreen


        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }
            window.clear();

            window.draw(lvlsHandler.getSprite());

            window.display();
        }
    
}
