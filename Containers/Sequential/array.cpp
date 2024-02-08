#include<iostream>
#include<array>
using namespace std ;
int main()
{
    array<int , 5> arr =  {1, 2, 3, 4, 5};
    array<int , 5>::iterator it ;
    cout << "The array is: ";
    for(it  = arr.begin() ; it != arr.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout << "Length of the array is: "<< arr.size()<< endl;
    cout << "Size of the array is: "<< sizeof(arr)<< endl;
    return 0;
}