#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <SFML/Graphics.hpp>

class Game
{
    public:

        void Run(sf::RenderWindow&);

    private:
        int FPS = 70;
};

#endif // GAME_H
