#include "Player.h"
#include <SFML/Graphics.hpp>
#include "Bloque.h"
#include <iostream>

using namespace std;

void Player::Controls(sf::RenderWindow &road,sf::Sprite &sprite){
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){road.close();}
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){dy = -3;dx=0;}
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){dy = 3;dx=0;}
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){dx = -3;dy=0;}
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){dx = 3;dy=0;}
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)){CreateBlock(road,sprite);}
}

void Player::Draw(sf::RenderWindow &road,sf::Sprite &sprite){
    sprite.setPosition(posx,posy);
    road.draw(sprite);
}

void Player::Move(){
    posx += dx;
    posy += dy;
    dx = dy = 0;
}

void Player::CreateBlock(sf::RenderWindow &road,sf::Sprite &sprite){
    int pos;
    if(dy == 0){pos = posx;}
    if(dx == 0){pos = posy;}
    tam=0;
    for(int i=pos;i<5*150;i+=30){
        Bloque cube;
        if(dy == 0)cube.posx = pos;
        if(dx == 0)cube.posy = pos;
        Disparos.push_back(cube);
        tam++;
        for(int i = 0;i<tam;i++){
            if(cube.posx==Disparos[i].posx && cube.posy==Disparos[i].posy){
                break;
            }
        }
    }
}
