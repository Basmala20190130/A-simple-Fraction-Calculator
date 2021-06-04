#include "fractions.h"
#include <iostream>
using namespace std;

fractions::fractions()
{
    //ctor
}
fractions::fractions(int intger_1, int intger_2){
int_1=intger_1;
int_2=intger_2;
}
double fractions::fraction()const{
double fra;
fra=double(int_1)/double(int_2);
return fra;
}
double fractions::operator+(const fractions& right){


 return fraction()+right.fraction();


}
double fractions::operator-(const fractions& right){

 return fraction()-right.fraction();

}
double fractions::operator*(const fractions& right){
return fraction()*right.fraction();
}
double fractions::operator/(const fractions& right){
return fraction()/right.fraction();
}
bool fractions::operator<(const fractions& right){
if(fraction()<right.fraction()){
return true;
}
return false;
}
bool fractions::operator>(const fractions& right){
if(fraction()>right.fraction()){
return true;
}
return false;
}
bool fractions::operator>=(const fractions& right){
if(fraction()>=right.fraction()){
return true;
}
return false;
}
bool fractions::operator<=(const fractions& right){
if(fraction()<=right.fraction()){
return true;
}
return false;
}
bool fractions::operator==(const fractions& right){
if(fraction()==right.fraction()){
return true;
}
return false;
}
bool fractions::operator!=(const fractions& right){
if(fraction()!=right.fraction()){
return true;
}
return false;
}

void fractions::reducingFractions(){

int i=2;
int j,m;
bool status=true;
while(int_2>=i){
if(int_1%i==0 && int_2%i==0){
 j=int_1/i;
 m=int_2/i;
break;
}
else{
    status=false;
}
i++;

}
if(status==false){
    cout<<"The reducing of this fraction is:"<<int_1<<"/"<<int_2;

}
else{
cout<<"The reducing of this fraction is:"<<j<<"/"<<m;
}
}
istream& operator>>(istream& input ,fractions& obj){
input>>obj.int_1>>obj.int_2;
return input;
}
ostream& operator<<(ostream& output , fractions& obj){
output<<"The fraction is: "<<obj.int_1<<"/"<<obj.int_2<<endl;
obj.reducingFractions();
return output;
}

fractions::~fractions()
{
    //dtor
}
