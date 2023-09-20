#include<iostream>
using namespace std;

long fibnoacci(long number)
{
    if(number <= 1)
    {
        return number ;
    }
    return fibnoacci(number - 1) + fibnoacci(number - 2); 
}
int main()
{

    cout<<"The fibnoacci of 5 is "<<fibnoacci(6)<<endl;
    return 0;
}