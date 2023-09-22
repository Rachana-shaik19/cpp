#include<iostream>
int pointer_increment(int* pointer_arr)
{
    
    int* value = pointer_arr + 1;
    std::cout<< *value << std::endl;
    value = pointer_arr++;
    std::cout<< *value  << std::endl;
    pointer_arr = nullptr;
    value = nullptr;
    return 0;
}
int main()
{
    int arr[] = {3,4,1,5,6};
    int* pointer_arr = arr;
    pointer_increment(pointer_arr);
    return 0;
}

