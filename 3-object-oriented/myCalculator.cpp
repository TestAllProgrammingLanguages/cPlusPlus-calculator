#include "myCalculator.h"

double MyCalculator::getNumberA()
{
    return numberA;
}

double MyCalculator::getNumberB()
{
    return numberB;
}


void MyCalculator::setNumberA(double value)
{
    numberA = value;
}

void MyCalculator::setnumberB(double value)
{
    numberB = value;
}



double MyCalculator::addition(double a,double b)
{
    return a+b;
}
double MyCalculator::subtraction(double a,double b)
{
    return a-b;
}

double MyCalculator::multipy(double a=1,double b=1)
{
    return a * b;
}

double MyCalculator::divide(double a=1, double b=1)
{
    return a/b;
}

void MyCalculator::getInputsFromUser()
{
    numberA=0;
    numberB=0;
    std::cout << "Please Enter values (first-number action second-number like 2 + 5): ";
    std::cin >> numberA >> theAction >> numberB;
}

#endif