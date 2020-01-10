#include <iostream>

int main()
{
    short c = 12;
    int d = 10;
    short s = 2;

    short *pc = &c;
    int *pd = &d;
    short *ps = &s;

    std::cout << "Variable c: address =" << pc << "\t value = " << *pc << std::endl;
    std::cout << "Variable d: address =" << pd << "\t value = " << *pd << std::endl;
    std::cout << "Variable s: address =" << ps << "\t value = " << *ps << std::endl;

    pc = ps;
    std::cout << "Variable c: address =" << pc << "\t value = " << *pc << std::endl;
    std::cout << "Variable d: address =" << pd << "\t value = " << *pd << std::endl;
    std::cout << "Variable s: address =" << ps << "\t value = " << *ps << std::endl;

    return 0;
}