#include<iostream>
using namespace std ;
int main()
{
    int alpha = 0;
    int digits = 0;
    int spaces =0;
    int symbols = 0;
    char ch = cin.get();
    while(ch != '\n')
    {
        if(ch >= '0' and ch <= '9' )
        {
            digits++;
        }
        else if((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z'))
        {
            alpha++;

        }
        else if(ch == ' ' or ch == '\t')
        {
            spaces++;
        }
        else 
        {
            symbols++;
        }
        ch = cin.get();

    }
    cout << "number of digits are : " << digits << endl;
    cout << "number of spaces are : " << spaces << endl;
    cout << "number of alphabets are : " << alpha<< endl;
    cout << "number of symbols are : " << symbols << endl;
    return 0;
}