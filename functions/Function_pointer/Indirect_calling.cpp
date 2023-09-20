#include<iostream>
int function(int x , int y)
{
    return x * y;
}
int main()
{
    int (*function_ptr)(int, int);
    function_ptr = function;
    int result  = function_ptr(13, 8);
    std::cout<< result << std::endl;
    function_ptr = nullptr;
    return 0;
}