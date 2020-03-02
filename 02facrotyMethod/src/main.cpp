
/***************************************************************************************************
* file:         $File$
* author:       $Author$
* date:         $Date$
* description:  $Description$

* copyright (c) 2020 WELL. All rights reserved
***************************************************************************************************/

#include <memory>
#include "ScIFactory.hpp"
#include "ScIBall.hpp"
#include "ScBasketballFactory.hpp"
#include "ScFootballFactory.hpp"
#include "ScVolleyballFactory.hpp"

int main()
{
    std::shared_ptr<Sc::IFactory> l_factory1 = std::make_shared<Sc::BasketballFactory>();
    std::shared_ptr<Sc::IFactory> l_factory2 = std::make_shared<Sc::FootballFactory>();
    std::shared_ptr<Sc::IFactory> l_factory3 = std::make_shared<Sc::VolleyballFactory>();
    
    std::shared_ptr<Sc::IBall> l_ball1 = l_factory1->createBall();
    std::shared_ptr<Sc::IBall> l_ball2 = l_factory2->createBall();
    std::shared_ptr<Sc::IBall> l_ball3 = l_factory3->createBall();

    l_ball1->printBallName();
    l_ball2->printBallName();
    l_ball3->printBallName();

    return 0;
}
