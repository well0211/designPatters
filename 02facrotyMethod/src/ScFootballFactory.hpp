
/***************************************************************************************************
* file:         $File$
* author:       $Author$
* date:         $Date$
* description:  $Description$

* copyright (c) 2020 WELL. All rights reserved
***************************************************************************************************/

#pragma once

#include <memory>
#include "ScIFactory.hpp"
#include "ScIBall.hpp"
#include "ScFootball.hpp"

namespace Sc
{

using namespace std;

class FootballFactory: public IFactory
{
public:
    FootballFactory() = default;

    std::shared_ptr<IBall> createBall() override;

};

std::shared_ptr<IBall> FootballFactory::createBall()
{
    return std::make_shared<Football>();
}

}
