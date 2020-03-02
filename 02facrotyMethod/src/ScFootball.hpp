
/***************************************************************************************************
* file:         $File$
* author:       $Author$
* date:         $Date$
* description:  $Description$

* copyright (c) 2020 WELL. All rights reserved
***************************************************************************************************/

#pragma once

#include <iostream>
#include "ScIBall.hpp"

namespace Sc
{

using namespace std;

class Football: public IBall
{
public:
    Football() = default;
    void printBallName() override;
};

void Football::printBallName()
{
    std::cout << "Ball (Football)" << std::endl;
}

}
