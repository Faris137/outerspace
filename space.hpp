/*******************************************************
 * By {Faris137} 2016-2021 <{farishassan2012@gmail.com}>
 *
 * This file is part of {Computer Graphics Lab6 Homework}.
 *
 *******************************************************/

#ifndef YP_space_HPP
#define YP_space_HPP
#include "main.hpp"

namespace space{

class MyPoints
{
public:
    void draw();
};

class Planets
{
public:
    void draw();
};

class Sat
{

public:
    void draw();
};

class MyVirtualWorld{
public:
    MyPoints mypoints;
    Planets planets;
    Sat sat;
    void draw()
    {
     mypoints.draw();
     planets.draw();
     sat.draw();

    }
    void tickTime()
    {

    }

    void init()
    {
    }

    };
}
#endif

