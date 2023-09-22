#include<iostream>
#include<memory>

bool unique_pointer(std::unique_ptr<int> ptr)
{
    int x = 13;
    if(*ptr == x)
    {
        std::cout << *ptr<<std::endl;
        return true;
    }
    else
        return false;
}
int main()
{
    std::unique_ptr<int> ptr(new int(13));
    bool result = unique_pointer(std::move(ptr));
    std::cout<< result <<std::endl;
    return 0;
}
