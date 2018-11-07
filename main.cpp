#include <iostream>
#include <SFML/Graphics.hpp>
#include "Game.h"

using namespace std;

int const widthscreen = 5*150;
int const heightscreen = 5*150;

int main()
{
    sf::RenderWindow road(sf::VideoMode(widthscreen,heightscreen),"Bad Ice");
    Game ice;
    ice.Run(road);
    return 0;

}

