
/***************************************************************************************************
* file:         $File$
* author:       $Author$
* date:         $Date$
* description:  $Description$

* copyright (c) 2020 WELL. All rights reserved
***************************************************************************************************/

#include <string>
#include <iostream>
#include "ScIAnimal.hpp"

namespace Sc
{

using namespace std;

class CatAnimal: public IAnimal
{
public:
    CatAnimal(string p_name, int p_age):
        m_name(p_name),
        m_age(p_age)
    {}

    CatAnimal()
    {
        m_name = "No body";
        m_age = 0;
    }

    //~CatAnimal() = default;

    void printInfo() override;
    void playWithOwner() override;

private:
    string m_name;
    int m_age;
};

void CatAnimal::printInfo()
{
    std::cout << "Cat animal, name is " << m_name << ", age is " << m_age << std::endl;
}

void CatAnimal::playWithOwner()
{
    std::cout << "Cat(" << m_name << ") is playing with owner." << std::endl;
}

}
