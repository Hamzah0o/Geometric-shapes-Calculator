#include<cmath>
#include<iostream>
#include "project1.h"
using namespace std ;

void square::setLength (double x )
{
    Length = x ;
}
double square::getLength()
{
    return Length ;
}
double areaS()
{
    return Length*Length;
}
double circS()
{
    return Length*4;
}
square::square()
{
    Length=0 ;
}
