#include<iostream>
using namespace std;
int right_shift(int number , int no_bits_shift)
{
    int result = number >> no_bits_shift ;
    
    return result ;
}
int left_shift(int number , int no_bits_shift)
{
    int result = number << no_bits_shift;
    return result ;
}
int main()
{
    int number ;
    int num_bits_shift ;
    cout << "Enter number value: ";
    cin >> number ;
    cout << "Enter number of bits to be shifted: ";
    cin >> num_bits_shift;
    cout << " Result of the right shift: "<< right_shift(number , num_bits_shift) << endl;
    // cout << " Result of the left shift: "<< left_shift(number , num_bits_shift) << endl;
    return 0;
}