#include <iostream>

int main()
{
    double numberA=0;
    double numberB=0;
    char theAction;
    double theResult = 0;
    std::cout << "Please Enter First value: ";
    std::cin >> numberA >> theAction >> numberB;
    switch(theAction)
    {
        case '+': theResult = numberA + numberB; break;
        case '*': theResult = numberA * numberB; break;
        case '-': theResult = numberA - numberB; break;
        case '/': theResult = numberA / numberB; break;
        default: std::cout << "Could not match the action with listed matches." << std::endl;
    }
    std::cout << "result = " << theResult << std::endl;
    return 0;
}