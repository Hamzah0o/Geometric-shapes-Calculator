//the implementation of the cube class
#include<cmath>
#include<iostream>
#include "cube.h"



 void cube::setLC(double CC)
    {LengthC=CC;}
    double cube::getLC()
    { return LengthC;}
    double cube::Volume()
    {
        return pow(LengthC,3);
    }
    double cube::areaV()
    { return pow(LengthC,2)*6;
    }
    cube::cube()
	{ LengthC=0;
	}
