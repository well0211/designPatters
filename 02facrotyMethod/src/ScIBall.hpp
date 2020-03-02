
/***************************************************************************************************
* file:         $File$
* author:       $Author$
* date:         $Date$
* description:  $Description$

* copyright (c) 2020 WELL. All rights reserved
***************************************************************************************************/

#pragma once


namespace Sc
{

class IBall
{
public:
    IBall() = default;
    virtual ~IBall() = default;

    virtual void printBallName() = 0; 
};

}
