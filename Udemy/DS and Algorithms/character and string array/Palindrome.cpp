#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    int i = 0;
    int length = 0;
    while(str[i] != '\0')
    {
        length++;
    }
    
    char str1[length] ;
    for(int i = length ; i >= 0 ; i--)
    {
        int j = 0;
        str1[j] = str[i];
        j++;
    }
    if(str1 == str)
    {
        return true;
    }
    // your code goes her  
}
int main()
{
    string str = "abcba";
    cout<<isPalindrome(str)<< endl;;
}