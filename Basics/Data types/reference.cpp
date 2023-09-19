#include <iostream>
using namespace std;
int main()
{
    int val = 10;
    cout<< "val = "<< val<< endl;
    int val_1 = 100;
    int &val_ref = val;
    cout << "val_add = "<< val_ref<< endl;
    val_ref = 20;
    cout<< " Changed value for val_ref is 20 and result in val is "<< val<<endl;
    val = 30;
    cout<< " Changed value for val is 30 and result in val_ref is "<< val_ref<<endl;
    val_ref = val_1;
    cout << "after changing to reference to another variable val_ref =" << val_ref<< " and val = "<< val <<endl;
    val_ref= 200;
    cout<<"After changing the val_ref = 200 and val_1 = "<< val_1 << "and val =" << val<< endl;
    cout <<"Size of val_ref = "<< sizeof(val_ref) << endl; // size of reference is 4 bytes
    bool boolean = true;
    bool &boolean_ref = boolean;
    cout << "sizeof boolean " << sizeof(boolean_ref) << endl;
    return 0;
}

/*-> when a variable declared as reference then it become alternate name of the existing variable ,
->Any changes in normal variable or in reference reflected in both of them 
->Refence and variable refers same memory
-> Size of the reference based on the type of variable we store 
*/