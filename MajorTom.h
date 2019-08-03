/*
 ***************************************************************
 Program Description: Major Tom
 *****************************************************************
 */


#ifndef MAJORTOM_H
#define MAJORTOM_H

#include <iostream>
#include <string>

class Machine
{
    public:
        bool isOperand(char c);
        bool isInteger(char c);
        int add(int result, int integer);
        int sub(int result, int integer);
    private:
        int reg1, reg2, exp;
        char operand, key;
    
};

bool Machine::correctForm(char input[])    //Determine if expression is valid
{
    int digitCount = 0;
    int opCount = 0;
    for(int i = 0; i < input[i]; i++)
    {
        if(isinteger(input[i]))
        {
            digitCount++;
        }
        else if(isOperator(input[i]))
        {
            opCount++;
        }
    }
    if(digitCount == opCount || digitCount < opCount)
    {
        cout << "Invalid Expression." << endl;
        return false;
    }
    else
    {
        return true;
    }
    
}

bool Machine::isOperand(char c)         //Determine if is operand
{
	if(c == '+' || c=='-')
    {
        return true;
    }
	return false;
}

bool Machine::isInteger(char c)       //Determine if is digit
{
	if(c >= '0' && c <= '9')
    {
        return true;
    }
	return false;
}

int Machine::add(int result, int integer)   //Determine if add
{
	for(int i=0; i<integer; i++)
    {
        result = result + 1;
    }
	return result;
}

int Machine::sub(int result, int integer)  //Determine if sub
{
	for(int i=0; i<integer; i++)
    {
        result = result - 1;
    }
	return result;
}
#endif
