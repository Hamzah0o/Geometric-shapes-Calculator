/*Assalamalikum Name/HAMZAH AMIN AHMED ALHAMIDI. Matric/1529427
 This program will calculate
 the area and circumefrence of the square,retangular and circle and the area of  the triangle and the
 volume of the cube*/

#include <iostream>
#include <iomanip>
#include "square.h"                               //the header files
#include "circle.h"
#include "rectangular.h"
#include "triangle.h"
#include "cube.h"
using namespace std ;



int main()
{   square sq1;         						 //square class.
    circle CR1; 							     //circle calss.
    triangle TR1; 							     //triangle class.
    cube CU1;									 //cube class.
  rectangular RR1;                               //rectangular class.
 	int cho ,choo ;                     //cho for the menu and choo for repeating the menu.
    double x , rad , Lr,Wr,bt,ht,Lc;    //variables for set the private values.
	do{                                       // repeating the menu.
    cout<<"\a\t\t\t Assalam Alikum wrh.wbh"<<endl;            //the menu
	cout<<"----------------------------------------";
    cout<<"\n\t\t 1-SQUARE.\n\t\t 2-CIRCLE\n\t\t 3-RECATANGULAR\n\t\t 4-TRIANGLE\n\t\t 5-CUBE"<<endl;
    cout<<"----------------------------------------";
 	cout<<"\n\nplease Enter a NUMBER :"<<endl;
 	cin>>cho;

 	while(cho<0&&cho>5)                     //specify the rang of input
 	{cout<<"invalid value please REenter";
 	cin>>cho;
 	}


 if(cho==1)                             //square
 {    cout<<"please Enter the Length of one sides of the square"<<endl;
		cin>>x;
  sq1.setLength(x);
        cout<<"The area is "<<setprecision(2)<<fixed<<sq1.areaS()<<endl;
        cout<<"The Circumeference is "<<setprecision(2)<<fixed<<sq1.circS()<<endl;
 }
 if(cho==2)								//circuit
 {  cout<<"please Enter the Length of the radious"<<endl;
  	cin>>rad;
  	CR1.setR(rad);
  	cout<<"The area is "<<setprecision(2)<<fixed<<CR1.calA(rad)<<endl;
  	cout<<"The circumference is "<< setprecision(2)<<fixed<<CR1.calC(rad)<<endl;
  }
 if(cho==3)                       //rectangular
 {cout<<"please Enter the Length of the rectangular"<<endl;
  cin>>Lr;
  RR1.setRL(Lr);
  cout<<endl<<"please Enter the Width of the rectangular"<<endl;
  cin>>Wr;
  RR1.setRW(Wr);
  cout<<"The area is "<<setprecision(2)<<fixed<<RR1.areaR()<<endl;
  cout<<"The circumference is"<< setprecision(2)<<fixed<<RR1.circR()<<endl;
}
 if(cho==4)                        //triangle
 {  cout<<"please Enter the Length of the basement"<<endl;
    cin>>bt;
    TR1.setBS(bt);
    cout<<"please Enter the Length of the high"<<endl;
    cin>>ht;
	TR1.setHS(ht);
	cout<<"The area is "<<setprecision(2)<<fixed<<TR1.areaT()<<endl;
 }
 if(cho==5)                       //cube
 { cout<<"please enter the Length of One side of the cube"<<endl;
   cin>>Lc;
   CU1.setLC(Lc);
   cout<<"The volume is "<<setprecision(2)<<fixed<<CU1.Volume()<<endl;
   cout<<"The area of the cube is "<<setprecision(2)<<fixed<<CU1.areaV()<<endl;
 }

 cout<<"to go back to the menue please enter 0 or any number to terminate "<<endl;
 cin>>choo;
} while(choo==0);


system("pause");

    return 0;
}





