
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
    std::shared_ptr<Sc::Paper> l_paper1 = std::make_shared<Sc::Paper>("ZhangSan", 12, new std::string("china is a big contry."))
    l_paper1->printPaperInfo();

    std::shared_ptr<Sc::Paper> l_paper2 = l_paper1->shallowClone();

    l_paper2->setName("LiSi");
    l_paper2->setId(14);
    l_paper2->setAnswer(new std::string("china is a very big contry."));
    
    l_paper1->printPaperInfo();
    l_paper2->printPaperInfo();

    std::shared_ptr<Sc::Paper> l_paper3 = l_paper1->deepClone();

    l_paper3->setName("WangWu");
    l_paper3->setId(15);
    l_paper3->setAnswer(new std::string("china is a very big contry."));
    
    l_paper1->printPaperInfo();
    l_paper2->printPaperInfo();
    l_paper3->printPaperInfo();

    return 0;
}
