#include<iostream>
template<typename T1 , typename T2>
double average(T1 num1 , T2 num2)
{
    double avg = (num1 + num2) / 2;
    return avg;
}
int main()
{
    int num1 = 10;
    float num2 = 24.4;
    std::cout << "average of num1 and num2 "<<average(num1, num2)<< std::endl;
    return 0;
}