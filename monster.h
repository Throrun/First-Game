#include <iostream>

class monster
{
private:
    int HP,DMG;
public:
    monster(int h,int d);
    ~monster();
    void getdamage(int d);
    void death();
    void attack();
};

monster::monster(int h,int d)
{
}

monster::~monster()
{
}
