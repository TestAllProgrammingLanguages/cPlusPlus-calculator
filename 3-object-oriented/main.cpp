#include "myCalculator.h"

int main()
{
    MyCalculator obj;

    switch(object.theAction)
    {
        case '+': object.theResult = object.addition(object.getNumberA,object.getNumberB); break;
        case '*': object.theResult = object.multipy(object.getNumberA,object.getNumberB); break;
        case '-': object.theResult = object.subtraction(object.getNumberA,object.getNumberB); break;
        case '/': object.theResult = object.divide(object.getNumberA,object.getNumberB); break;
        default: std::cout << "Could not match the action with listed matches." << std::endl;
    }
    std::cout << "result = " << object.theResult << std::endl;
    return 0;
}

