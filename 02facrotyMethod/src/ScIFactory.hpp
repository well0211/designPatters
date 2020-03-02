
/***************************************************************************************************
* file:         $File$
* author:       $Author$
* date:         $Date$
* description:  $Description$

* copyright (c) 2020 WELL. All rights reserved
***************************************************************************************************/

#pragma once

#include <memory>
#include "ScIBall.hpp"

namespace Sc
{

class IFactory
{
public:
    IFactory() = default;
    virtual ~IFactory() = default;

     virtual std::shared_ptr<IBall> createBall() = 0;
};

}
