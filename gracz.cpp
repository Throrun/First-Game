#include "gracz.h"

class gracz{
    private:
    int HP,LVL=0,DMG;
    public:
    void lvlup(){
        HP+=10;
        LVL+=1;
        DMG+=5;
    }
    void attack(){
        //@todo damage to monster
    }
    void getdamage(int damage){
        HP -= damage;
        if(HP<=0){
            death();
        }
    }
    void death(){
        //@todo some restart or first main menu
    }
    void setrank(char x){
        switch (x)
        {
        case 'a':
            HP=10;
            DMG=20;
            break;
        case 'w':
            HP=20;
            DMG=10;
            break;
        default:
            break;
        }
    }
};