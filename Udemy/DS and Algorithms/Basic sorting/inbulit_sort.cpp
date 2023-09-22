#include<iostream>
#include<algorithm>
using namespace std ;
int inbuilt_sort(int[], int);
bool compare(int , int);
int main()
{
    int array[] = {32,54,62,12,57,92};
    int array_length = sizeof(array)/sizeof(int);
    inbuilt_sort(array, array_length);
    for(int i = 0 ; i < array_length - 1; i++)
    {
        cout << array[i]<< ",";
    }
    cout << array[array_length - 1]<< endl;
    return 0;
}

int inbuilt_sort(int array[], int array_length)
{
    cout <<"array starting address: " << array << endl;
    cout <<"array end address: "<<array + array_length << endl;
    sort(array, array + array_length, compare);
    //sort(array, array + array_length, greater<int>());
    //reverse(array , array + array_length);
    return 0;

}
bool compare(int a , int b)
{
    //cout << "a = " << a << " b = " <<b <<  endl ;
    return a < b;

}