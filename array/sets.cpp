#include<iostream>
using namespace std ;
int main()
{
    int arr[] = {1, 2,3};
    int length = sizeof(arr)/sizeof(int);
    int sum = 0;
    for(int i = 0 ; i < length ;i++ )
    {
        int temp = 0;
        for(int j = i; j < length ; j++)
        {
            temp += arr[i];
            sum = sum + temp ;
        }
    }
    cout << "sum is "<< sum << endl;
    return 0;
}

