#ifndef PLAYER_H
#define PLAYER_H
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Bloque.h"

using namespace std;

class Player
{
    public:
        void Controls(sf::RenderWindow&,sf::Sprite&);
        void Draw(sf::RenderWindow&,sf::Sprite&);
        void Move();
        void CreateBlock(sf::RenderWindow&,sf::Sprite&);
        int posx = (5*150/2 - 110);
        int posy = (5*150 - 380);
        int dx = 0,dy = 0;
        vector<Bloque> Disparos;
        int tam =  0;
};

#endif // PLAYER_H
