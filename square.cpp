//the implementation of the square class
#include<cmath>
#include<iostream>
#include "square.h"
using namespace std ;

void square::setLength (double x )
{
    Length = x ;
}

double square::areaS()
{
    return Length*Length;
}
double square::circS()
{
    return Length*4;
}
square::square()
{
    Length=0 ;
}

