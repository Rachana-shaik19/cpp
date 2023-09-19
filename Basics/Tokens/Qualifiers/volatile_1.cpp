#include<iostream>
using namespace std ;
int volatile_2(int , int);
int main()
{
    volatile int val_1 = 0;
    val_1++;
    int val_2 = 0;
    val_2++;
    cout <<"val_1 = " << val_1<< endl;
    cout << "val_2 = " << val_2 << endl;
    volatile_2(val_1, val_2);
    return 0;
}
int volatile_2(int val_1, int val_2)
{
    // int val_1 ;
    // int val_2;
    cout <<"val_1 = " << val_1<< endl;
    cout << "val_2 = " << val_2 << endl;
    return 0;
}