#include <iostream>

double addition(double,double);
double subtraction(double,double);
double multipy(double,double);
double divide(double,double);


int main()
{
    double numberA=0;
    double numberB=0;
    char theAction;
    double theResult = 0;
    std::cout << "Please Enter values (first-number action second-number like 2 + 5): ";
    std::cin >> numberA >> theAction >> numberB;
    switch(theAction)
    {
        case '+': theResult = addition(numberA,numberB); break;
        case '*': theResult = multipy(numberA,numberB); break;
        case '-': theResult = subtraction(numberA,numberB); break;
        case '/': theResult = divide(numberA,numberB); break;
        default: std::cout << "Could not match the action with listed matches." << std::endl;
    }
    std::cout << "result = " << theResult << std::endl;
    return 0;
}



double addition(double a=0, double b=0)
{
    return a + b;
}

double divide(double a=1, double b=1)
{
    return a / b;
}

double multipy(double a=0, double b=0)
{
    return a * b;
}

double subtraction(double a, double b)
{
    return a - b;
}
