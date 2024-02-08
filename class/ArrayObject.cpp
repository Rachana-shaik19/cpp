#include<iostream>
using namespace std ;
class ArrayObject
{
    public:
        int num ;

    void funtion()
    {
        cout<< "Enter the number: ";
        cin>> num;
        cout << endl;
        cout << "Value is "<< num << endl;
        cout << "****************************"<< endl;
    }
};
int main()
{
    ArrayObject array_object[5];
    // ArrayObject array_object[5];
    int length = sizeof(array_object)/sizeof(array_object[0]);
    for(int i = 0; i < length; i++)
    {
        array_object[i].funtion();
    }
    return 0;
}