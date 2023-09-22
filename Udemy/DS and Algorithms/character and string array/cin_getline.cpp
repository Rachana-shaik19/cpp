#include<iostream>
using namespace std ;
int main()
{
    char str[10000];
    cin.getline(str, 1000);
    cout << "str is: "<< str << endl;
    char str1[200];
    cin.getline(str1, 200, '.');
    cout << "str1: "<<str1<<endl;
    char str2[300];
    cin.get(str2, 300);
    cout << "str2 : "<< str2<< endl;
    // char str3[400];
    // cin.get(str3,400);
    // cout << "str3 : "<< str3 << endl;
    return 0;

}