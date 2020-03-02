
/***************************************************************************************************
* file:         $File$
* author:       $Author$
* date:         $Date$
* description:  $Description$

* copyright (c) 2020 WELL. All rights reserved
***************************************************************************************************/

#include <iostream>
#include "ScIBall.hpp"

namespace Sc
{

using namespace std;

class Volleyball: public IBall
{
public:
    Volleyball() = default;
    void printBallName() override;
};

void Volleyball::printBallName()
{
    std::cout << "Ball (Volleyball)" << std::endl;
}

}
