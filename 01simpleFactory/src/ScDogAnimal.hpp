
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

class DogAnimal: public IAnimal
{
public:
    DogAnimal(string p_name, int p_age):
        m_name(p_name),
        m_age(p_age)
    {}
    
    DogAnimal()
    {
        m_name = "No body";
        m_age = 0;
    }
    
    //~DogAnimal() = default;

    void printInfo() override;
    void playWithOwner() override;

private:
    string m_name;
    int m_age;
};

void DogAnimal::printInfo()
{
    std::cout << "Dog animal, name is " << m_name << ", age is " << m_age << std::endl;
}

void DogAnimal::playWithOwner()
{
    std::cout << "Dog(" << m_name << ") is playing with owner." << std::endl;
}

}
