
/***************************************************************************************************
* file:         $File$
* author:       $Author$
* date:         $Date$
* description:  $Description$

* copyright (c) 2020 WELL. All rights reserved
***************************************************************************************************/

#include <string>
#include <iostream>
#include <memory>
#include "ScIAnimal.hpp"
#include "ScCatAnimal.hpp"
#include "ScDogAnimal.hpp"
#include "ScPigAnimal.hpp"

namespace Sc
{

enum class AnimalType
{
    Ecat,
    Edog,
    Epig
};


class ScAinmalFactory
{
public:
    ScAinmalFactory() = default;
    ~ScAinmalFactory() = default;

    std::shared_ptr<IAnimal> createPet(AnimalType p_animalType, std::string p_name, int p_age);
};

std::shared_ptr<IAnimal> ScAinmalFactory::createPet(AnimalType p_animalType, std::string p_name, int p_age)
{
    switch (p_animalType)
    {
        case AnimalType::Ecat:
        {
            return std::make_shared<CatAnimal>(p_animalType, p_age);
        }
        case AnimalType::Edog:
        {
            return std::make_shared<DogAnimal>(p_animalType, p_age);
        }
        case AnimalType::Epig:
        {
            return std::make_shared<PigAnimal>(p_animalType, p_age);
        }
        default:
            std::cout << "ERROR: AnimalType wrong." << std::endl;
    }
}

}
