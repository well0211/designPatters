
/***************************************************************************************************
* file:         $File$
* author:       $Author$
* date:         $Date$
* description:  $Description$

* copyright (c) 2020 WELL. All rights reserved
***************************************************************************************************/

#pragma once

#include <iostream>

namespace Sc
{

class IMasks
{
public:
    IMasks() = default; 
    virtual ~IMasks() =  default; 

    virtual void wearMasks() = 0;
};

class CivilMasks: public IMasks
{
public:
    CivilMasks() = default; 
    virtual ~CivilMasks() =  default; 

    void wearMasks() override;
};

void CivilMasks::wearMasks()
{
    std::cout << "Cilil masks keep the (COVID-2019) virus away from Chinese." << std::endl;
}

class MedicalMasks: public IMasks
{
public:
    MedicalMasks() = default; 
    virtual ~MedicalMasks() =  default; 

    void wearMasks() override;
};

void MedicalMasks::wearMasks()
{
    std::cout << "Medical masks keep the (COVID-2019) virus away from Medical staff." << std::endl;
}

class IDisinfectant
{
public:
    IDisinfectant() = default; 
    virtual ~IDisinfectant() =  default; 

    virtual void useDisinfectant() = 0;
};

class CivilDisinfectant: public IDisinfectant
{
public:
    CivilDisinfectant() = default; 
    virtual ~CivilDisinfectant() =  default; 

    void useDisinfectant() override;
};

void CivilDisinfectant::useDisinfectant()
{
    std::cout << "Cilil disinfectant kill the (COVID-2019) virus." << std::endl;
}

class MedicalDisinfectant: public IDisinfectant
{
public:
    MedicalDisinfectant() = default; 
    virtual ~MedicalDisinfectant() =  default; 

    void useDisinfectant() override;
};

void MedicalDisinfectant::useDisinfectant()
{
    std::cout << "Medical disinfectant kill the (COVID-2019) virus." << std::endl;
}

}//end Sc
