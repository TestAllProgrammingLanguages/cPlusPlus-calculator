#ifndef MY_CALCULATOR
#define MY_CALCULATOR

#include <iostream>

class MyCalculator
{
    private: 
        double numberA;
        double numberB;

    public:
        double theResult;
        char theAction;

        void getInputsFromUser();
        double getNumberA();
        double getNumberB();
        void setNumberA(double);
        void setNumberB(double);

        double addition(double,double);
        double subtraction(double,double);
        double divide(double,double);
        double multipy(double,double);
};
#endif
