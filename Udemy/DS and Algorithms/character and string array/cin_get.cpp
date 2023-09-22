#include<bits/stdc++.h>
using namespace std ;
int main()
{
    char sentence[1000];
    char temp = cin.get(); 
    int len = 0;
    while(temp != '#')
    {
        sentence[len++] = temp;
        temp = cin.get();
    }
    sentence[len] = '\0';
    cout << "length = "<< len<<endl;
    cout <<"name : " <<sentence << endl;
    char str[100];
    cin.get(str, 100);
    cout << str<< endl;
     return 0;
}