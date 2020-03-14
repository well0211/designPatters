
/***************************************************************************************************
* file:         $File$
* author:       $Author$
* date:         $Date$
* description:  $Description$

* copyright (c) 2020 WELL. All rights reserved
***************************************************************************************************/

#pragma once

#include <memory>
#include <iostream>

namespace Sc
{

class IFactory
{
public:
    IFactory() = default;
    virtual ~IFactory() = default;

     virtual std::shared_ptr<IBall> createBall() = 0;
};

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
