#include<iostream>
template<typename T>
int* fun1(T* num1, T & num2)
{
    int sum = *num1 + num2;
    int num3 = 40;
    num1 = &num3;
    num2 = num3;
    int *sum_address = &sum;
    return sum_address;
}

int main()
{
    int a = 10;
    int b = 20;
    int* c = fun1(&a, b);
    std::cout << "result is *c = " << *c << std::endl;
    // std::format("a and b value is {} and {} ", a , b);
    return 0;
}