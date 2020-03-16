
/***************************************************************************************************
* file:         $File$
* author:       $Author$
* date:         $Date$
* description:  $Description$

* copyright (c) 2020 WELL. All rights reserved
***************************************************************************************************/

#pragma once

#include <iostream>
#include <memory>
#include "ScHouse.hpp"


namespace Sc
{

class IBuilder
{
public:
    IBuilder() = default; 
    virtual ~IBuilder() =  default; 

    virtual void buildHouse() = 0;
    virtual std::shared_ptr<House> getHouse() = 0;

private:
    virtual void setBuilder() = 0;
    virtual void buildFloor() = 0;
    virtual void buildWall() = 0;
    virtual void buildRoof() = 0;
};

class BuilderA: public IBuilder
{
public:
    BuilderA()
    {
        m_house = std::make_shared<House>();
    }
    ~BuilderA() = default;

    void buildHouse() override
    {
        setBuilder();
        buildFloor();
        buildWall();
        buildRoof();
    }
    std::shared_ptr<House> getHouse() override
    {
        return m_house;
    }

private:
    void setBuilder() override
    {
        m_house->setBuilder("Builder HengDa");
    }   
    void buildFloor() override
    {
        m_house->setFloor("Floor from HengDa.");
    }
    void buildWall() override
    {
        m_house->setWall("Wall from HengDa.");
    }
    void buildRoof() override
    {
        m_house->setRoof("Roof from HengDa.");
    }

    std::shared_ptr<House> m_house;    
};

class BuilderB: public IBuilder
{
public:
    BuilderB()
    {
        m_house = std::make_shared<House>();
    }
    ~BuilderB() = default;

    void buildHouse() override
    {
        setBuilder();
        buildFloor();
        buildWall();
        buildRoof();
    }
    std::shared_ptr<House> getHouse() override
    {
        return m_house;
    }

private:
    void setBuilder() override
    {
        m_house->setBuilder("Builder Biguiyuan");
    }   
    void buildFloor() override
    {
        m_house->setFloor("Floor from Biguiyuan.");
    }
    void buildWall() override
    {
        m_house->setWall("Wall from Biguiyuan.");
    }
    void buildRoof() override
    {
        m_house->setRoof("Roof from Biguiyuan.");
    }

    std::shared_ptr<House> m_house;    
};


}//end Sc
