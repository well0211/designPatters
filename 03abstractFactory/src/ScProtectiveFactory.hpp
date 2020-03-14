/***************************************************************************************************
* file:         $File$
* author:       $Author$
* date:         $Date$
* description:  $Description$

* copyright (c) 2020 WELL. All rights reserved
***************************************************************************************************/

#pragma once

#include <memory>
#include "ScProtectiveProducts.hpp"

namespace Sc
{

class IFactory
{
public:
    IFactory() = default;
    virtual ~IFactory() =  default; 

    virtual std::shared_ptr<IMasks> createMasks() = 0;
    virtual std::shared_ptr<IDisinfectant> createDisinfectant() = 0;
};

class CivilFactory: public IFactory
{
public:
    CivilFactory() = default;
    virtual ~CivilFactory() =  default; 

    std::shared_ptr<IMasks> createMasks() override;
    std::shared_ptr<IDisinfectant> createDisinfectant() override;
};

std::shared_ptr<IMasks> CivilFactory::createMasks()
{
    return std::make_shared<CivilMasks>();
}

std::shared_ptr<IDisinfectant> CivilFactory::createDisinfectant()
{
    return std::make_shared<CivilDisinfectant>();
}

class MedicalFactory: public IFactory
{
public:
    MedicalFactory() = default;
    virtual ~MedicalFactory() =  default; 

    std::shared_ptr<IMasks> createMasks() override;
    std::shared_ptr<IDisinfectant> createDisinfectant() override;
};

std::shared_ptr<IMasks> MedicalFactory::createMasks()
{
    return std::make_shared<MedicalMasks>();
}

std::shared_ptr<IDisinfectant> MedicalFactory::createDisinfectant()
{
    return std::make_shared<MedicalDisinfectant>();
}

}// end Sc
