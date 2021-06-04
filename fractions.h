#ifndef FRACTIONS_H
#define FRACTIONS_H
#include <iostream>
using namespace std;

class fractions
{
    protected:
        int int_1;
        int int_2;
    public:
        fractions();
        fractions(int intger_1, int intger_2);
        double fraction()const;
        double operator+(const fractions& right);
        double operator-(const fractions& right);
        double operator*(const fractions& right);
        double operator/(const fractions& right);
        bool operator<(const fractions& right);
        bool operator>(const fractions& right);
        bool operator>=(const fractions& right);
        bool operator<=(const fractions& right);
        bool operator!=(const fractions& right);
        bool operator==(const fractions& right);
        int recursion (int a,int b);
        void reducingFractions();
        friend ostream& operator<<(ostream& output , fractions& obj);
        friend istream& operator>>(istream& input ,fractions& obj);


        virtual ~fractions();




};

#endif // FRACTIONS_H
