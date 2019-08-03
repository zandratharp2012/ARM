#include <iostream>

int fetch();
int decode();
int execute();
int store();

int Reg1 = 0;
int Reg2 = 0;
int Reg3 = 0;
int ROUT = 0;

int main()
{
    while (true)
    {
        fetch();
        decode();
        execute();
        store();
    }

    return 0;
}

int fetch()
{
    char key = 0;
    std::cin.get(key);
    Reg2 = key;
}

int decode()
{

    if (Reg2 >= '0' && Reg2 <= '9')
    {
        Reg1 = Reg2 - '0';
    }

}

int execute()
{
    for (int i = Reg1; i >= 0; i--)
    {
        while (Reg3 >= 0)
        {
            if (Reg2 == '+')
                Reg3++;
            else if (Reg2 == '-')
                Reg3--;
        }
        if (Reg3 < 0)
            std::cout << "Illegal operation." << std::endl;
    }
}

int store()
{
    ROUT = Reg3;
    std::cout << "The output is the following: " << ROUT << std::endl;
}
