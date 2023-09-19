#include<iostream>
using namespace std ;
int main()
{
    int val = 10;
    int val_1 = 100;
    int *val_pointer = &val;
    cout << "val = " << val << endl;
    cout << "deference value *val_pointer = " << *val_pointer<< endl;
    *val_pointer = 20;
    cout << "change value  for *val_pointer is 20 and val is "<<val<< endl; 
    val_pointer = &val_1;
    cout << "Assign another address to the pointer and pointer value is "<< * val_pointer<< endl;
     bool boolean = true;
    bool *boolean_ref = &boolean;
    cout << "size of boolean " << sizeof(boolean_ref) << endl;
    return 0;
}
/*
->Pointer is used to refer the address of an variable with same data type of the variable
-> Size of pointer either 4 or 8 bytes

*/