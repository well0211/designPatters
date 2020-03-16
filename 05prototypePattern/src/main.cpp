
/***************************************************************************************************
* file:         $File$
* author:       $Author$
* date:         $Date$
* description:  $Description$

* copyright (c) 2020 WELL. All rights reserved
***************************************************************************************************/

#include <memory>
#include "ScPrototypePaper.hpp"

int main()
{
    Sc::Paper* l_paper1 = new Sc::Paper("ZhangSan", 12, new std::string("china is a big contry."));
    std::cout << "original paper1 from zhangsan " << std::endl;
    l_paper1->printPaperInfo();
    std::cout << std::endl;

    Sc::Paper* l_paper2 = l_paper1;
    std::cout << "original copy paper2 from zhangsan " << std::endl;
    l_paper2->printPaperInfo();
    std::cout << std::endl;
    l_paper2->setName("LiSi");
    l_paper2->setId(14);
    l_paper2->setAnswer(new std::string("china is a very big contry.--lisi"));
    
    std::cout << "after original copy paper2 modified for lisi " << std::endl;
    std::cout << "original copy paper1 " << std::endl;
    l_paper1->printPaperInfo();
    std::cout << "modified copy paper2 " << std::endl;
    l_paper2->printPaperInfo();
    std::cout << std::endl;

    Sc::Paper* l_paper3 = l_paper1->clone();
    std::cout << "original copy paper3 from zhangsan " << std::endl;
    l_paper2->printPaperInfo();
    std::cout << std::endl;

    l_paper3->setName("WangWu");
    l_paper3->setId(15);
    l_paper3->setAnswer(new std::string("china is a very big contry.--wangwu"));
    
    std::cout << "after original copy paper3 modified for wangwu " << std::endl;
    std::cout << "original copy paper1 " << std::endl;
    l_paper1->printPaperInfo();
    std::cout << "modified copy paper2 " << std::endl;
    l_paper2->printPaperInfo();
    std::cout << "modified copy paper3 " << std::endl;
    l_paper3->printPaperInfo();

    return 0;
}
