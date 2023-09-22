#include<iostream>
int pointer_to_const()
{
    return 0;
}
int main()
{
    int a = 10;

    const int* ptr ;
    ptr = &a;
    std::cout << "*ptr = &a and value is "<< *ptr << std::endl; 
    // *ptr = 212;
    int b = 21;
    ptr = &b;
    std::cout << "*ptr = &b and value is "<< *ptr << std::endl; 
    return 0;
}
/*
* for pointer to the constant we can't change the value of the pointer point to the address but we can change the 
    pointer point to the address
*/