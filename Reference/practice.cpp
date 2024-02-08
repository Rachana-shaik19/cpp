#include<iostream>
using namespace std ;

int main()
{
    string str = "adcd" ;
    int n = 10;
    string count_N = to_string(n);
    string str2 = str.append(count_N);
    cout<<str2<<endl;
}