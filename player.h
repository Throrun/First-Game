#include <iostream>
#include <string>
class player
{
private:
    std::string name;
    int HP,LVL,DMG,EXP,CLASS;
public:
    player(std::string n,int h,int l,int d,int e,int c);
    ~player();
    void getexp(int exp);
    void lvlup();
    void attack();
    void getdamage(int dmg);
    void death();
    void setclass(int c);
    };

player::player(std::string n,int h,int l,int d,int e,int c)
{
    if(n==""||h<0||l<0||d<0||e<0){
        std::cout << "ERROR 01" << std::endl; 
    }
}

player::~player()
{
}
