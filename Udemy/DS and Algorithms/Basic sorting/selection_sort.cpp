#include<iostream>
using namespace std ;
int selection_sort(int[], int);
int main()
{
    int array[] = {1, 3, 2, 4, 6, 5};
    int length_array = sizeof(array)/sizeof(int);
    selection_sort(array, length_array);
    for(int i = 0; i < length_array - 1; i++)
    {
        cout << array[i]<< ",";

    }
    cout << array[length_array - 1]<< endl;

}
int selection_sort(int array[], int array_length)
{
    for(int pos = 0; pos < array_length - 1; pos++)
    {
        int current_value = array[pos];
        int min_position = pos;
        int temp = 0;
        for(int i = pos ; i < array_length ; i++)
        {
            if(array[min_position] > array[i] )
            {
                min_position = i;
            }
        }
        swap(array[min_position], array[pos]);

    }

    return 0;
}