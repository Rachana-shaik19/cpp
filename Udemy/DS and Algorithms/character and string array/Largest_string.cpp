#include<iostream>
#include<cstring>
using namespace std ;
int main()
{
    int n ;
    cin>> n ;

    cin.get();
    char str[1000];
    char lar_str[1000];
    int lar_len = 0;

    while(n--)
    {
        cin.getline(str, 1000);
        int len = strlen(str);
        if(len > lar_len)
        {
            strcpy(lar_str, str);
        }

    }
    cout << "Largest string is : "<< lar_str<< endl;
    return 0;
}