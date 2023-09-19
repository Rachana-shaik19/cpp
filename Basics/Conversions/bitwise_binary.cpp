#include<iostream>
using namespace std ;
int convert(int number)
{
    if (number > 1)
        cout<< "right shift of "<<number << " = " << convert(number >> 1)<< endl;
    printf("bits are %d\n", number & 1);
}
int main()
{
    int decimal ;
    cout << "Enter the number ";
    cin >> decimal;
    convert(decimal);
    return 0;
}