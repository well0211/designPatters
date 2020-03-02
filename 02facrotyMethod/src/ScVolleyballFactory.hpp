
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
#include "ScVolleyball.hpp"

namespace Sc
{

using namespace std;

class VolleyballFactory: public IFactory
{
public:
    VolleyballFactory() = default;

    std::shared_ptr<IBall> createBall() override;

};

std::shared_ptr<IBall> VolleyballFactory::createBall()
{
    return std::make_shared<Volleyball>();
}

}
