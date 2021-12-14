#include <SFML/Graphics.hpp>

#include "Terrain.h"
#include "TerrainRenderer.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");    

    TerrainRenderer("Resources/Textures/0.png");

    /*sf::Sprite grassSprite;
    grassSprite.setTexture(texture);
    grassSprite.setTextureRect(sf::IntRect(4 * 48, 3 * 48, 48, 48));

    sf::Sprite waterSprite;
    waterSprite.setTexture(texture);
    waterSprite.setTextureRect(sf::IntRect(6 * 48, 3 * 48, 48, 48));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        grassSprite.setPosition(0, 0);
        window.draw(grassSprite);

        waterSprite.setPosition(48, 0);
        window.draw(waterSprite);

        waterSprite.setPosition(0, 48);
        window.draw(waterSprite);

        grassSprite.setPosition(48, 48);
        window.draw(grassSprite);




        // Ici, on dessine !

        window.display();
    }
    return 0;*/

    //Terrain("Resources/Levels/0.lvl");


    return 0;
}