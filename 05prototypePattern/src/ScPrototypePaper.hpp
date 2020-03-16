
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

namespace Sc
{

using namespace std;

class IPrototypePaper
{
public:
    IPrototypePaper() = default;
    virtual ~IPrototypePaper() = default;

    virtual IPrototypePaper* clone() = 0;
};

class Paper: public IPrototypePaper
{
public:
    ~Paper() =  default; 
    Paper(){}

    Paper(string p_name, int p_id, string * p_answer)
    {
        m_name = p_name;
        m_id = p_id;
        m_answer = p_answer;
    }

    void setId(int p_id)
    {
        m_id = p_id;
    }

    void setName(string p_name)
    {
        m_name = p_name;
    }

    void setAnswer(string * p_answer)
    {
        m_answer = p_answer;
    }

    void printPaperInfo()
    {
        std::cout << "Name: " << m_name << ", Id: " << m_id << ", Answer: " << *m_answer << std::endl;
    }
    
    Paper* clone() override
    {
        auto l_paper = new Paper();
        
        l_paper->setId(m_id);
        l_paper->setName(m_name);
        l_paper->setAnswer(m_answer);
        return l_paper;
    }

private:
    int m_id;
    string m_name;
    string * m_answer;
};

}//end Sc
