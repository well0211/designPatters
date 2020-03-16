/***************************************************************************************************
* file:         $File$
* author:       $Author$
* date:         $Date$
* description:  $Description$

* copyright (c) 2020 WELL. All rights reserved
***************************************************************************************************/

#pragma once

#include <memory>
#include <string>
#include <iostream>

namespace Sc
{

using namespace std;

class House
{
public:
    House() = default;
    ~House() =  default; 

    void setFloor(string p_floor)
    {
        m_floor = p_floor;
    }

    void setWall(string p_wall)
    {
        m_wall = p_wall;
    }

    void setRoof(string p_roof)
    {
        m_roof = p_roof;
    }

    void setBuilder(string p_builder)
    {
        m_builder = p_builder;
    }

    void getHouseInfo()
    {
        std::cout << "House from: " << m_builder << std::endl;
        std::cout << "    " << m_floor << std::endl;
        std::cout << "    " << m_wall << std::endl;
        std::cout << "    " << m_roof << std::endl;
    }

private:
    string m_floor;
    string m_wall;
    string m_roof; 
    string m_builder;
};

}// end Sc
