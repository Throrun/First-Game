#include <iostream>
#include "player.h"
#include <Windows.h>

void player::getexp(int exp){
    if(exp<0) std::cout << "ERROR #01" << std::endl;
    else{
        EXP += exp;
    }
}
void player::lvlup(){
    ++LVL;
    switch (CLASS)
    {
    case 1:
        HP+=2;
        DMG+=4;
        break;
    
    case 2:
        HP+=4;
        DMG+=2;
        break;
    
    default:
        std::cout << "ERROR #02" << std::endl;
        break;
    }
}
void player::attack(){
    //@todo attack monster

}
void player::getdamage(int dmg){
    HP -= dmg;
    if(HP<=0) death();
}
void player::death(){
    system("clear");
    std::cout << "=======================" << std::endl; Sleep(500);
    std::cout << "=======GAME OVER=======" << std::endl; Sleep(500);
    std::cout << "=======================" << std::endl; Sleep(500);
    std::cout << "===Your lvl: "<< LVL << " =========" << std::endl; Sleep(500);
    std::cout << "=======================" << std::endl << std::endl; Sleep(500);
    std::cout << "=======================" << std::endl; Sleep(500);
    std::cout << "==1.Exit=2.Play Again==" << std::endl; Sleep(500);
    std::cout << "=======================" << std::endl; Sleep(500);
    //@todo menu after death
}
void player::setclass(int c){
    switch (c)
    {
    case 1:
        //Rouge 
        //HP 2 unit per level DMG 4 unit per level
        HP=10;
        DMG=10;
        CLASS=1;
        break;
    case 2:
        //Knight
        //HP 4 unit per level DMG 2 unit per level
        HP=10;
        DMG=10;
        CLASS=2;
        break;
    default:
        std::cout << "zła klasa";
        break;
    }
}
