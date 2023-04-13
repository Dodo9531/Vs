// This is an open source non-commercial project. Dear PVS-Studio, please check it.
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
    return sizeof(ad) + sizeof(ds);//функая для расчёта размера массивов место сложения их размеров перемножала размеры 
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
        false1 = true; // Ошибка того что переменная false1 перед if всегда равна false из-за лишнего присвоения
    if (false1 == false)
        std::cout << "false";
    if (false1 == true) //Некорректное сравнения переменной bool с целым числом
        std::cout << "true";
    std::cout << "Hello World!\n";
}
