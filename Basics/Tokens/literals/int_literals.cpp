#include<iostream>
using namespace std;
int main()
{
    const int octal = 0200;
    const int hexa = 0x80;
    const int decimal = 128;
    const int binary = 0b10000000;
    cout << "Hexa = " << hexa <<endl;
    cout << "binary = " << binary <<endl;
    cout << "octal = " << octal <<endl;
    cout << "Decimal = " << decimal <<endl;
    return 0;
}