﻿// This is an open source non-commercial project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com
#include <iostream>
int foo(int a, int b)
{
    int d = a + b;
    return d;
} // Было две функции с разным названием но полностью одинаковыми телами, удалил вторую функцию
int arrsizes()
{   
    char ad[256];
    char ds[132];
    return sizeof(ad) * sizeof(ds);
}
int main()
{
    bool false1;
    int a, b;
    std::cin >> a;
    std::cin >> b;
    if (foo(0, 0) > 12)
        false1 = false;
    else
        false1 = true;
    false1 = false;
    if (false1 == false)
        std::cout << "false";
    if (false1 == 12)
        std::cout << "true";
    std::cout << "Hello World!\n";
}
