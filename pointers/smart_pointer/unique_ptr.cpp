#include<iostream>
#include<memory>

bool unique_pointer(std::unique_ptr<int> ptr, std::unique_ptr<float> ptr_1)
{
    int x = 13;
    std::unique_ptr<int>ptr_copy = std::move(ptr); // ptr = NULL
    std::unique_ptr<float>ptr_1_copy(new float(std::move(*ptr_1))); 
    if(ptr_1 == NULL)
    {
        std::cout << "The ptr_1 is NULL"<< std::endl;
    }
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
    std::unique_ptr<float> prt_1(new float(21.5));
    std::unique_ptr<int> ptr(new int(13));
    bool result = unique_pointer(std::move(ptr), std::move(prt_1));  //ptr , ptr_1 is NULL 
    if(ptr == NULL)
    {
        std::cout << "The ptr is NULL"<< std::endl;
    }
    if(result == true)
    {
        std::cout << "The values are same"<<std::endl;
    }
    else 
    {
        std::cout << "the values are not same"<< std::endl;
    }
    return 0;
}
