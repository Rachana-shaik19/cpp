#include<iostream>
#include<string>
#include<climits>
using namespace std;
int myAtoi(string);
int main()
{
    string s = "12 Hello";
    int result = myAtoi(s);
    cout<< "value  = "<< result << endl;
    return 0;
}

int myAtoi(string s)
{
    auto length = s.length();
    int sign = 1;
    auto index = 0;
    while(index < length && s[index] == ' ' )
    {
        index++;
    }
    if(s[index] == '+' )
    {
        index++;
        sign = 1;
    }
    else if(s[index] == '-')
    {
        index++;
        sign = -1 ;
    }
    long result = 0;
    cout << index << endl;
    while(index < length && isdigit(s[index]))
    {   
        result = result * 10 + (s[index++] - '0');
        if (result * sign > INT_MAX) {
            return INT_MAX;
        } else if (result * sign < INT_MIN) {
            return INT_MIN;
        }
    }
    return sign * result ;
}