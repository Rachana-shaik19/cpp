#include<iostream>
#include<cstdarg>
using namespace std;
int differentType(const char* format...)
{
    va_list args;
    va_start(args, format);
    while(*format != '\0')
    {
        if(*format == 'r')
        {
            int ch = va_arg(args, int);
            cout<<static_cast<char>(ch)<< endl;
        }
        else if(*format == 'e')
        {
            int num = va_arg(args, int);
            cout<< num << endl;
        }
        else if (*format == 'v')
        {
            double num1 = va_arg(args, double);
            cout << num1<< endl;
        }
        else if(*format == 'a')
        {
            int num2 = va_arg(args, int);
            cout << num2 << endl;
        }
        

        format++;  
    }

    return 0;
}
int main()
{
    differentType("reva",'1', 54, 54.6, 45);
    return 0;
}