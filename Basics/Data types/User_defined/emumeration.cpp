#include<iostream>
using namespace std ;
int main()
{
    enum result 
    {value1 = 100, value2 = 0};
    enum result res = value1;
    cout<< res<<endl;
    return 0;
}
/*
->enumeration is user defined data type which give integer value constant 
*/