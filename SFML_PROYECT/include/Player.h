#ifndef PLAYER_H
#define PLAYER_H
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Bloque.h"

using namespace std;

class Player
{
    public:
        void Controls(sf::RenderWindow&);
        void Draw(sf::RenderWindow&,sf::Sprite&);
        void Move();
        void CreateBlock();
        int posx = (5*150/2 - 110);
        int posy = (5*150 - 380);
        int dx = 0,dy = 0;
        vector<Bloque> Disparos;
        int tam =  0;
        bool notblock = false;
    private:
        int sizeblock = 30;
        int setLimit(int&,int&);
        bool up = false;
        bool down = true;
        bool right = false;
        bool left = false;


};

#endif // PLAYER_H
