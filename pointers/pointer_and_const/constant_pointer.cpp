#include<iostream>
/// @brief 
/// @param ptr 
/// @return 
int constant_pointer(bool* const ptr)
{
    std::cout<< "val = "<< *ptr << std::endl;
    *ptr = true ;
    std::cout<< " after change value of *ptr val = "<< *ptr << std::endl;
    delete ptr;
    return 0;
}
int main()
{
    bool val = true;
    bool* const ptr = &val;
    val = false;
    constant_pointer(ptr);
    int b = 10;
    return 0;
}
/*
* constant pointer is used not to change the address pointer point to but it the change the value in the address .
*/