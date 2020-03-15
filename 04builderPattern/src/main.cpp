
/***************************************************************************************************
* file:         $File$
* author:       $Author$
* date:         $Date$
* description:  $Description$

* copyright (c) 2020 WELL. All rights reserved
***************************************************************************************************/

#include <memory>
#include "ScHouse.hpp"
#include "ScBuilder.hpp"


int main()
{
    std::shared_ptr<Sc::IBuilder> l_builder1 = std::make_shared<Sc::BuilderA>();
    std::shared_ptr<Sc::IBuilder> l_builder2 = std::make_shared<Sc::BuilderB>();

    l_builder1->buildHouse();
    l_builder2->buildHouse();
    std::share_ptr<House> l_house1 l_builder1->getHouse();
    std::share_ptr<House> l_house2 l_builder2->getHouse();

    l_house1->getHouseInfo();
    l_house2->getHouseInfo();

    return 0;
}
