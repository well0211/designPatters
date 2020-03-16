
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

    std::shared_ptr<IPrototypePaper> shallowClone() = 0;
    std::shared_ptr<IPrototypePaper> deepClone() = 0;
};

class Paper: public IPrototypePaper
{
public:
    Paper() = default;
    ~Paper() =  default; 

    Paper(string p_name, int p_id, std::shared_ptr<string> p_answer)
    {
        m_id = p_name;
        m_name = p_id;
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

    void setAnswer(std::shared_ptr<string> p_answer)
    {
        m_answer = p_answer;
    }

    void printPaperInfo()
    {
        std::cout << "Name: " << m_name << ", Id: " << m_id << ", Answer: " << m_answer << std::endl;
    }

    std::shared_ptr<Paper> shallowClone() override
    {
        auto l_paper = std::make_shared<Paper>();

        l_paper->setId(m_id);
        l_paper->setName(m_name);
        l_paper->setAnswer(m_answer);
        return l_paper;
    }
    
    std::shared_ptr<Paper> deepClone() override
    {
        auto l_paper = std::make_shared<Paper>();
        
        l_paper->setId(m_id);
        l_paper->setName(m_name);
        l_paper->setAnswer(std::make_shared<string>(*m_answer));
        return l_paper;
    }

private:
    int m_id;
    string m_name;
    std::shared_ptr<string> m_answer;
};

}//end Sc
