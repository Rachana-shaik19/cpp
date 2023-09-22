#include<iostream>
using namespace std ;
int print_number(int);
int main()
{
    print_number(6);
    return 0;
}
int print_number(int number)
{
    if(number < 1)
    {
        return 0; 
    }
    print_number(number - 1);
    cout << number << " ";
   
}