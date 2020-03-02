
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
#include "ScBasketball.hpp"

namespace Sc
{

using namespace std;

class BasketballFactory: public IFactory
{
public:
    BasketballFactory() = default;

    std::shared_ptr<IBall> createBall() override;

};

std::shared_ptr<IBall> BasketballFactory::createBall()
{
    return std::make_shared<Basketball>();
}

}
