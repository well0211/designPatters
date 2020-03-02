
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

class Basketball: public IBall
{
public:
    Basketball() = default;
    void printBallName() override;
};

void Basketball::printBallName()
{
    std::cout << "Ball (Basketball)" << std::endl;
}

}
