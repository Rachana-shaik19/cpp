#include<iostream>
using namespace std ;
int fun1();
int main()
{
    fun1();
    return 0;
}
int fun1()
{
    cout << sizeof(const char*)<<endl;
    return 0;
}
float fun2()
{
    return 8.3;
}