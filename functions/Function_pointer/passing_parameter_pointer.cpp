#include<iostream>
int fun_1()
{
    std::cout << "fun_1"<< std::endl; 
    return 0;
}
int fun_2(int (*fun_1)())
{
    std::cout << "fun_2"<< std::endl;
    fun_1();
}
int main()
{
    fun_2(fun_1); 
    return 0;
}