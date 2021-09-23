//the implementation of the circle class
#include<cmath>
#include<iostream>
#include "circle.h"


 void circle::setR (double x)
    {rad=x; }
        double circle::getR () const
        {  return rad ;}
        double circle::calA(double g)
        {  double n ;
            n =(g*g)*M_PI ;
            return n ; }
           double circle::calC(double m)
        { double b ;
          b=(m*2)*M_PI;
            return b ;     }
circle::circle ()
      { rad=0;}
   
