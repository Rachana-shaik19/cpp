#include<iostream>
int main()
{
    int a = 10;
    int* b = &a;
    int c = 16;
    std::cout << "value of a and value of *b = " << *b << std::endl;
    *b = 42;
    std::cout << "change value of *b = 42 and value of a is " << a << std::endl;
    b = &c;
    std::cout<< "pointing the pointer of b to the c = 16 and *b value is "<< *b<< std::endl;
    b = NULL;
    std::cout << "deferencing the pointer to nullptr "<<*b<< std::endl;
    return 0;
}