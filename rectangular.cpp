//the implementation of the rectangular class
#include<cmath>
#include<iostream>
#include "rectangular.h"

 	void rectangular::setRL(double p)
         { LenghtR=p ;}
    void rectangular::setRW(double pp)
         { WidhtR=pp ;}
     double rectangular::areaR()
          { return LenghtR*WidhtR ; }
    double rectangular::circR ()
          { return 2*LenghtR+2*WidhtR ;}
     rectangular::rectangular()
       { LenghtR=0; WidhtR=0; }
