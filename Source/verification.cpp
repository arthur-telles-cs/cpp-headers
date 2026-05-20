#include <iostream>
#include <string>
#include <stdlib.h>

bool verification()
{
    std::string password = "admin123";
    std::string enter;

    std::cout << "Enter password:: ";
    std::cin >> enter;

    if (enter == password)
    {
        system("cls");
        return true;
    }

    else
    {
        system("cls");
        verification();
    }
}
