
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

class IBall
{
public:
    IBall() = default;
    virtual ~IBall() = default;

    virtual void printBallName() = 0; 
};

class Basketball: public IBall
{
public:
    Basketball() = default;
    void printBallName() override;
};

void Basketball::printBallName()
{
    std::cout << "Ball (Basketball)" << std::endl;
}

class Football: public IBall
{
public:
    Football() = default;
    void printBallName() override;
};

void Football::printBallName()
{
    std::cout << "Ball (Football)" << std::endl;
}

class Volleyball: public IBall
{
public:
    Volleyball() = default;
    void printBallName() override;
};

void Volleyball::printBallName()
{
    std::cout << "Ball (Volleyball)" << std::endl;
}

}
