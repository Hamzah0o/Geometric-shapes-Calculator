//the implementation of the triangle  class
#include<cmath>
#include<iostream>
#include "triangle.h"


void triangle::setBS(double BS)
    { base=BS ; }
    double triangle::get()
    { return base ; }
    void triangle::setHS(double HS)
    { high=HS; }
    double triangle::getHS()
    { return high ;}
    double triangle::areaT()
    { return 0.5*base*high ;}
    triangle::tringle()
    {base=0;high=0;}
