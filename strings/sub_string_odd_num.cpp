#include<iostream>
using namespace std ;
string largestOddNumber(string num)
{
    int num_length = num.length();
    long s_num = 0;
    for(int i = 0; i < num_length ; i++)
    {
        s_num = s_num * 10 + (num[i] - '0');
    }
    string str = "";
    if(s_num % 2 == 1 )
    {
        return num;
    }
    else if(num_length == 1)
    {
        if(s_num % 2 == 0)
        {
            return str;
        }
        else
        {
            return num;
        }
    }
    else
    {
        int j = 0;
        s_num = 0;
        for(int i = 0; i < num_length ; i++)
        {
            // cout << "The each digit is "<< num[i] <<endl;
            s_num = s_num * 10 + (num[i] - '0');
            cout << "The sum is "<< s_num <<endl;
            if(s_num % 2 == 1)
            {
                j = i;
                cout << "The add number is "<< j <<endl;
            }
        }
        return num.substr(0, j + 1);  
    }
}
int main()
{
    string str = largestOddNumber("54");
    cout << "The result substring = " << str<<endl;
    return 0;
}