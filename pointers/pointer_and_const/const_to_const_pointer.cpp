#include<iostream>
bool const_to_const_pointer(const bool* ptr)
{
    std::cout<< "val = "<< *ptr << std::endl;
    delete ptr;
    return 0;
}
int main()
{
    bool bool_val = false;
    static const bool* const ptr = &bool_val;
    bool_val = true;
    const_to_const_pointer(ptr);
    return 0;
}
/*
* constant to constant pointer we cannot point to another 
*/