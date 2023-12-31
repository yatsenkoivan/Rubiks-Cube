﻿#include "Cube.h"

int main()
{
    SetConsoleCP(1251);
    std::string input;
    int size=0;
    while (true)
    {
        std::cout << "Enter a size of a cube (min 2, max 9): ";
        std::cin >> input;
        size = atoi(input.c_str());
        if (size <= 9 && size >= 2) break;
        else
        {
            system("cls");
            std::cout << "Incorrect input\n";
        }
    }
    Side::size = size;
    if (Side::size >= 5)
    {
        Element::size_x = 3;
        Element::size_y = 2;
    }
    if (Side::size >= 7)
    {
        Element::size_x = 2;
        Element::size_y = 1;
    }
    system("cls");
    Cube c;
    c.Scramble();
    c.Start();
}
