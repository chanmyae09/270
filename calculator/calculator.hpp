#ifndef CALCULATOR_APP
#define CALCULATOR_APP
#include <iostream>
#include <string>

class calculator{
    private:
        double val1;
        double val2;
        std::string operator1;
    public:
        calculator(float value1, float value2, std::string operator1){
            value1 = val1;
            value2 = val2;
            operator1 = operator1;
        }
       double add();
       double subtract();
       double multiply();
       double divide();
};

#endif

