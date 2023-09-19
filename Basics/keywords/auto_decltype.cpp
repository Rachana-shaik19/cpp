#include<iostream>
using namespace std ;
auto and_opertion(int num1, int num2)
{
    decltype(num2) sum = num1 | num2;
    bool var = 0, var1 = 1;
    cout << "boolean value var = "<<var << " var1 = "<< var1<< endl;
    return sum;
}
int main()
{
    int num1, num2;
    cout<< "enter num1 = ";
    cin>> num1;
    cout<< "enter num2 = ";
    cin >> num2;
    cout << "AND operation of num1 and num2 "<<and_opertion(num1 , num2)<<endl;;
    return 0;
}