
/***************************************************************************************************
* file:         $File$
* author:       $Author$
* date:         $Date$
* description:  $Description$

* copyright (c) 2020 WELL. All rights reserved
***************************************************************************************************/

#include <memory>
#include "ScProtectiveFactory.hpp"
#include "ScProtectiveProducts.hpp"

int main()
{
    std::shared_ptr<Sc::IFactory> l_factory1 = std::make_shared<Sc::CivilFactory>();
    std::shared_ptr<Sc::IFactory> l_factory2 = std::make_shared<Sc::MedicalFactory>();

    std::shared_ptr<Sc::IMasks> l_masks1 = l_factory1->createMasks();
    std::shared_ptr<Sc::IDisinfectant> l_disinfectant1 = l_factory1->createDisinfectant();
    l_masks1->wearMasks();
    l_disinfectant1->useDisinfectant();

    std::shared_ptr<Sc::IMasks> l_masks2 = l_factory2->createMasks();
    std::shared_ptr<Sc::IDisinfectant> l_disinfectant2 = l_factory2->createDisinfectant();
    l_masks2->wearMasks();
    l_disinfectant2->useDisinfectant();

    return 0;
}
