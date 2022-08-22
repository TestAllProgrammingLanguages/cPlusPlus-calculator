#include <iostream>
#include "mycalculator.h"

using namespace std;

int main()
{
    MyCalculator object;
    object.getInputsFromUser();

    switch(object.theAction)
    {
        case '+': object.theResult = object.addition(object.getNumberA(),object.getNumberB()); break;
        case '*': object.theResult = object.multipy(object.getNumberA(),object.getNumberB()); break;
        case '-': object.theResult = object.subtraction(object.getNumberA(),object.getNumberB()); break;
        case '/': object.theResult = object.divide(object.getNumberA(),object.getNumberB()); break;
        default: std::cout << "Could not match the action with listed matches." << std::endl;
    }
    std::cout << "result = " << object.theResult << std::endl;
    return 0;
}
