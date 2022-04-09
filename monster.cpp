#include <iostream>
#include "monster.h"
#include "player.h"
void monster::getdamage(int d){
    HP -= d;
    if(HP<=0){
        death();
    }
}
void monster::death(){
    monster::~monster();
    std::cout << "Potwór wyeliminowany! +5 EXP" << std::endl;
}
void monster::attack(){
    getdamage(DMG);
}