#ifndef BLOQUE_H
#define BLOQUE_H
#include <SFML/Graphics.hpp>
#include <iostream>


class Bloque
{
    public:
        Bloque();
        void Draw(sf::RenderWindow&,sf::Sprite&);
        int posx,posy;
};

#endif // BLOQUE_H
