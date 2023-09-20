#include<iostream>
#include<cmath>
using namespace std ;
int power(int);
int main()
{
    double var ;
    cout << "Enter the double: ";
    cin >> var; // 
    cout << "The square root of "<< var << " : " << sqrt(var) << endl;
    cout << "The cube root of " << var <<" : " <<  cbrt(var) << endl;
    cout << "The sine of " << var << " : " << sin(var)<< endl;
    cout << "The cosine of " << var <<" : " <<  cos(var)<< endl;
    cout << "The ceil of " << var << " : " << ceil(var) << endl;
    cout << "The floor of " << var <<" : " <<  floor(var)<< endl;
    cout << "The round of " << var << " : " << round(var) << endl;
    power(var);
    return 0;
}
int power(int var)
{
    int power ;
    cout << "Enter the power : " ;
    cin >> power ;
    cout << var << " raised to the " << power << "power is "<< pow(var, power) << endl;
    return 0;
}