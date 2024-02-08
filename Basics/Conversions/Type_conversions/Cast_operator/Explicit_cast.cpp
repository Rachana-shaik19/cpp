#include<iostream>
using namespace std ;
int main()
{
    bool val = true;
    int val_int = int(val);
    cout << val_int<<endl;
    float b = 10.343;
    int b_int = double(b) + float(b); // 20 
    float b_float = float(val_int) + int(b); // 11
    cout << "b_float = "<< b_float<<endl;
    cout <<"sizeof(b_float) = "<<sizeof(b_float)<<endl; // 4
    cout<< sizeof(b_int) << endl; // 4
    cout << b_int << endl;
    long long long_b = 23343478363345383;
    int long_b_i = long_b;
    cout << "long to int float_b = "<< long_b_i<<endl;
    float float_b = long_b;
    cout << "long to float float_b = "<< float_b<<endl; // 2.33435e+16
    float ff = 32.432312;
    cout << "ff = "<< ff<<endl; // 32.4323
    return 0;
}