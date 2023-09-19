#include<iostream>
using namespace std ;
int main()
{
    char ch = 'a';
    int int_var ;
    int_var = (int)ch;
    int Z_ascii = 90;
    char int_char = int(Z_ascii);
    cout << "int_var = " << int_var << endl;
    cout << "ch = " << ch << endl;
    cout<<"int to char coversion of "<< Z_ascii << " is "<<int_char << endl;
    return 0;
}