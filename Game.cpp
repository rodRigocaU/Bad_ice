#include "Game.h"
#include "Player.h"
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;


void Game::Run(sf::RenderWindow &road){

        sf::Texture ice_Clim;
        ice_Clim.loadFromFile("linux.png");
        ice_Clim.setSmooth(true);
        sf::Sprite ice_ClIm;
        ice_ClIm.setTexture(ice_Clim);

        sf::Texture block;
        block.loadFromFile("sprite.png");
        block.setSmooth(true);
        sf::Sprite Block;
        Block.setTexture(block);

        Player player1;
        while(road.isOpen())
        {
                road.setFramerateLimit(FPS);
                road.clear(sf::Color(255,0, 0));
                player1.Draw(road,ice_ClIm);
                player1.Controls(road,Block);
                for(int i = 0;i<player1.tam;i++){
                    player1.Disparos[i].Draw(road,Block);
                }
                player1.Move();
                road.display();


            sf::Event e;
            while(road.pollEvent(e))
            {
                if(e.type == sf::Event::Closed)
                    road.close();
            }
        }
}

