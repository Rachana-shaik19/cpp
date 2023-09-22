#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;
int couting_sort(int[], int);
int main()
{
    int array[] = {10,2,43,12,3};
    int array_length = sizeof(array) / sizeof(array[0]);
    counting_sort(array, array_length); 
    
    return 0;
}
int counting_sort(int array[], int array_length)
{

    int largest = -1 ;
    for(int i = 0; i < array_length ; i++)
    {
        largest = max(largest, array[i]);
    }
    for(int x : array)
    {
        
    }

    vector<int> freq(largest + 1, 0);

    
    
    return 0;
}