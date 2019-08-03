/*
 ***************************************************************
 Program Description: Major Tom
 *****************************************************************
 */

#include <iostream>
#include <string>

#include "MajorTom.h"

int main()
{
	//Declarations
	int reg1 = 0;
	int reg2 = 0;
	char operand;
	char key = 0;
	int exp = 0;
	
	//getting input from user
	std::string input; 
	std::cout << "Please enter an expression: ";
	getline(std::cin, input);
	key = input[exp];
	
	while(key != '\0')
    {
        if(correctForm(input))      //If expression is valid, continue program
        {
            std::cout << "Processing: ";
            std::cout << key << std::endl;
            
            if(isOperand(key))
            {
                operand = key;
            }
            else if (isInteger(key))
            {
                reg2 = key - '0';
                switch(operand)
                {
                    case '+':
                    {
                        reg1 = add(reg1,reg2);
                        break;
                    }
                    case '-':
                    {
                        reg1 = sub(reg1,reg2);
                        break;
                    }
                }
            }
            
            std::cout << "Display: " << reg1 << std::endl;

            ++exp;
            key = input[exp];
        }
        else
        {
            std::cout << "Incorrect form, please re-enter expression: ";
            getline(std::cin, input);
            key = input[exp];
        }
        return 0;
}
