
#include <iostream>
#include "Entity.h"
#include "Vector2.h"
#include "Integer.h"

int main() {

    Integer i1 = 3; //0011
    Integer i2 = 2; //0010
    Integer AAA = i1 << i2; //001100 soit a*2^b

    std::cout << AAA << std::endl;

    /**/

    Vector2 vv{ 1.3f, 4.4f };

    std::cout << vv.GetX() << vv.GetY() << std::endl;

    return 0;
}
