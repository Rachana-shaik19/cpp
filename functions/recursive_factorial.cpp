#include<iostream>
using namespace std ;
long factorial(long );
int main()
{
    cout <<" factorial of 8 is "<< factorial(8) << endl ;
    return 0;
}
long factorial(long number)
{
    if(number == 1)
    {
        return 1 ;
    }
    return number * factorial(number - 1);
}
