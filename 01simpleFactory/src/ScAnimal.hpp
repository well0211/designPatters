
/***************************************************************************************************
* file:         $File$
* author:       $Author$
* date:         $Date$
* description:  $Description$

* copyright (c) 2020 WELL. All rights reserved
***************************************************************************************************/
#pragma once

#include <string>
#include <iostream>

namespace Sc
{

using namespace std;

class IAnimal
{
public:
    IAnimal() = default;
    virtual ~IAnimal() = default;

    virtual void printInfo() = 0;
    virtual void playWithOwner() = 0; 
};

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

class PigAnimal: public IAnimal
{
public:
    PigAnimal(string p_name, int p_age):
        m_name(p_name),
        m_age(p_age)
    {}
    
    PigAnimal()
    {
        m_name = "No body";
        m_age = 0;
    }

    void printInfo() override;
    void playWithOwner() override;

private:
    string m_name;
    int m_age;
};

void PigAnimal::printInfo()
{
    std::cout << "Pig animal, name is " << m_name << ", age is " << m_age << std::endl;
}

void PigAnimal::playWithOwner()
{
    std::cout << "Dig(" << m_name << ") is playing with owner." << std::endl;
}

}
