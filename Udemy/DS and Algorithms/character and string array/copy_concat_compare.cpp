#include<iostream>
#include<cstring>
using namespace std ;
int main()
{
    char a[1000] = "apple";
    char b[1000];

    //length str
    cout << "string length"<<strlen(a)<< endl;

    //strcopy
    strcpy(b, a);
    cout << b<< endl;

    //compare
    cout << strcmp(a, b)<< endl;

    // concat
    char c[] = " www";
    cout<< strcat(b, c) << endl;

    return 0;

}