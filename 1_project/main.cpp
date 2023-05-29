//#include "Gun.h"   soldier中已经调用了gun.h
#include "Soldier.h"
#include <iostream>

using namespace std;
void test()
{
    Solider sanduo("xusanduo");
    sanduo.addGun(new Gun("AK47"));
    sanduo.addBulletToGun(1);
    sanduo.fire();
    sanduo.fire();//装了一发子弹想射击两次
}

int main()
{
    cout << "This is a test string..." << endl;
    cout << "This is a test string..." << endl;
    test();
    return 0;
}
