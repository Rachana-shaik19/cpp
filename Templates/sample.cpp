#include<iostream>
template<typename T>
T fun1(T var1, T var2)
{
    double a = var1 + var2;
    return a;
}
int main()
{
    int a = 10;
    int b = 4;
    double c;
    std::cout<< fun1(a, b)<< std::endl;
    return 0;
}
/*
* cannot c
*/