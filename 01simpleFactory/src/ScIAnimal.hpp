
/***************************************************************************************************
* file:         $File$
* author:       $Author$
* date:         $Date$
* description:  $Description$

* copyright (c) 2020 WELL. All rights reserved
***************************************************************************************************/

#pragma once


namespace Sc
{

class IAnimal
{
public:
    IAnimal() = default;
    virtual ~IAnimal() = default;

    virtual void printInfo() = 0;
    virtual void playWithOwner() = 0; 
};

}
