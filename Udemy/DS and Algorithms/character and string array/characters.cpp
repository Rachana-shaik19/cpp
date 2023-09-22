#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

int main()
{
    char str[] = {'e','l','a', '\0'};
    cout << str<<endl;
    cout << strlen(str)<< endl; // string length = 3
    int length = sizeof(str) ; // size of string = 4
    cout << length << endl;
    for(int i = 0; i <= strlen(str) - 1; i++)
    {
        cout<< str[i];
    }
    return 0;
}