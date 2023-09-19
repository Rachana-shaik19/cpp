#include <iostream>
using namespace std;

int decimal_to_binary(int number)
{
    int remainder, i = 1 ;
    int binary_number = 0;
    while(number != 0)
    {
        remainder = number % 2;
        number = number / 2;
        binary_number = binary_number + remainder * i;
        i = i * 10;
    }

    return binary_number;
}
int main() 
{
    int decimal_num ;
    cout << "Enter decimal number = ";
    cin >> decimal_num;
    cout << "Conversion decimal to binary of "<<decimal_num << " = "<<decimal_to_binary(decimal_num) << endl;

    return 0;
}
