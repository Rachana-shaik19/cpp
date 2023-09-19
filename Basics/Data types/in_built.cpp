#include<iostream>
using namespace std;
int main()
{
    cout<< sizeof(wchar_t)<<endl;
    wchar_t ch = L'n';
    cout<< sizeof(ch)<<endl;
    cout << ch<< endl;

    return 0;
}