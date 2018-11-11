#include "Player.h"
#include <SFML/Graphics.hpp>
#include "Bloque.h"
#include <iostream>

using namespace std;

void Player::Controls(sf::RenderWindow &road){
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){road.close();}
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){dy = -3;dx=0;up=true;down=left=right=false;}
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){dy = 3;dx=0;down=true;up=left=right=false;}
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){dx = -3;dy=0;left=true;down=up=right=false;}
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){dx = 3;dy=0;right=true;down=left=up=false;}
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space)){CreateBlock();}
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)) {notblock = true;}
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

int Player::setLimit(int &limit,int &i){if(limit == sizeblock)return (i>limit);else return (i<limit);}

void Player::CreateBlock(){
    tam=0;
    int index = 0;
    if(up == false && down == false){
        int incremento = (left == true)?incremento = -sizeblock:incremento = sizeblock;
        int limit = (left == true)?limit = sizeblock:limit = 5*150-2*sizeblock;
        for(int i=posx+incremento;setLimit(limit,i);i+=incremento){
            Bloque cube;
            cube.posx = i;
            cube.posy = posy + incremento;
            Disparos.push_back(cube);
            tam++;
            notblock = false;
            /*
            for(int j=index;j<tam;j++){
                if(cube.posx==Disparos[j].posx && cube.posy==Disparos[j].posy){
                    Disparos.erase(Disparos.begin()+j-1);
                    tam--;
                }*/
            }
        }

    if(left == false && right == false){
        int incremento = (up == true)?incremento = -sizeblock:incremento = sizeblock;
        int limit = (up == true)?limit = sizeblock:limit = 5*150-2*sizeblock;
        for(int i=posy+incremento;setLimit(limit,i);i+=incremento){
            Bloque cube;
            cube.posx = posx + incremento;
            cube.posy = i;
            Disparos.push_back(cube);
            tam++;
            notblock = false;
            /*for(int j=index;j<tam;j++){
                if(cube.posx==Disparos[j].posx && cube.posy==Disparos[j].posy){
                    Disparos.erase(Disparos.begin()+j-1);
                    tam--;
                }*/

        }
    }
}


