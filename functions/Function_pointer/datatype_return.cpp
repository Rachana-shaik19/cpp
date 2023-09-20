#include<iostream>
int function_pointer(int a, int b)
{
    int c = a + b;
    std::cout<<"a + b = "<< c << std::endl;

    return 0;
}
int function_pointer(int (*ptr)(int a , int b))
{

    // int d  = a + b + c;
    // a = 43;
    // std::cout<<"a + b + c = "<< d << std::endl;
    return 0;  
}
int main()
{
    int a = 10;
    int b = 20, c = 30, d = 40;
    // int (*ptr_1)() = &function_pointer;
    int (*ptr)(int, int);
    ptr = function_pointer;
    function_pointer(ptr);
    (*ptr)(a, b);
    ptr = nullptr;
    // ptr_1= nullptr;
    return 0;
}