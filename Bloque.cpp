#include "Bloque.h"
#include <iostream>
#include <SFML/Graphics.hpp>

Bloque::Bloque(){
    posx = 0;
    posy = 0;
}
void Bloque::Draw(sf::RenderWindow &road,sf::Sprite &sprite){
    sprite.setPosition(posx,posy);
    road.draw(sprite);
}
