#include<iostream>
using namespace std ;   
int main()
{
    // static const char* const array[] = {"Rachana", "Revanth"};
    // cout << sizeof(array)<< endl;
    // int size_char = sizeof(const char*);
    // cout << size_char<< endl;
    // const char* prt = array[0];

    // for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) 
    // {
    //     delete[] array[i];
    // }
    enum tcp {
        syn = 0,
        fin
    };
    cout<< tcp(0)<< endl;
    return 0;
}
