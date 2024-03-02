// lab2.var7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    unsigned short i;
    unsigned short q;
    /* для первого допа
    unsigned int notx;
    unsigned short y = 65535;//1111 1111 1111 1111*/
    std::cin >> i;

    //unsigned short x = 8; //8 = 0000 0000 0000 1000
    //unsigned short x = 242; //242 = 0000 0000 1111 0010
    unsigned short x = 82; //82 - 0000 0000 0101 0010

    q = x << (15-i);
    q = q >> 15;
    std::cout << q << std::endl;

    /* первый доп
    notx = x ^ y; //исключающее или
    std::cout << notx << std::endl;
    //std::cout << unsigned short (~x) << std:: endl; (проверка корректности)
    */
    return 0;


}

// биты считаются справа и с нуля