#include "fractioncalculator.h"
#include "fractions.h"
#include <iostream>
using namespace std;

fractioncalculator::fractioncalculator()
{
    //ctor
}
void fractioncalculator::calculatoroffractions(){
cout<<"Welcome to the fraction calculator:"<<endl;
fractions obj1,obj2;
 cout<<"Enter the two integers of the first fraction you want to divide:"<<endl;
 cin>>obj1;
  cout<<"Enter the  two integers of the second fraction you want to divide:"<<endl;
  cin>>obj2;
  double result;
  int choice;
  while(true){
       cout<<endl;
       cout<<"_Select one of these choices:_"<<endl;
       cout<<"1-Adding fractions"<<endl;
       cout<<"2-subtracting fractions"<<endl;
       cout<<"3-multiplying fractions"<<endl;
       cout<<"4-dividing fractions"<<endl;
       cout<<"5-reducing fractions"<<endl;
       cout<<"6-exit"<<endl<<endl;
       cin>>choice;
       if(choice==6){
         cout<<"Thanks for your visiting :)"<<endl;
         break;
       }
       switch(choice){
   case 1:
    result=obj1+obj2;
    cout<<"fraction 1+fraction 2= "<<result<<endl;
    break;
   case 2:
    result=obj1-obj2;
    cout<<"fraction 1-fraction 2= "<<result<<endl;
    break;
   case 3:
    result=obj1*obj2;
    cout<<"fraction 1*fraction 2= "<<result<<endl;
    break;
   case 4:
    result=obj1/obj2;
    cout<<"fraction 1/fraction 2= "<<result<<endl;
    break;
   case 5:
    cout<<"The reducing of the first fraction is:"<<endl<<obj1<<endl;
    cout<<"The reducing of the second fraction is:"<<endl<<obj2<<endl;
    break;
   default:
    cout<<"Wrong choice ,change another one from the following selections ,please :)"<<endl;
    break;
       }



  }
}
fractioncalculator::~fractioncalculator()
{
    //dtor
}
