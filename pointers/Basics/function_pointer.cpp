#include<iostream>
int pointer_to_function(int num)
{
    return num * num ;
}
int main()
{
    int num = 10;
    int (*funtion_pointer)(int);
    funtion_pointer = pointer_to_function;
    int result = (*funtion_pointer)(num);
    std::cout<< result << std::endl;
    return 0;
}