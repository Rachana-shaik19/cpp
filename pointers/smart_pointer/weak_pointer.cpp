#include<iostream>
#include<memory>
int main()
{
    std::shared_ptr<int> ptr (new int(21));
    std::shared_ptr<int>ptr_copy;
    ptr_copy = ptr;
    std::weak_ptr<int>ptr_weak_copy ;
    ptr_weak_copy = ptr;
    std::cout << "The value of ptr before changing ptr_copy = "<< *ptr<<std::endl;
    *ptr_copy = 54;
    std::cout << "The value of ptr after changing ptr_copy = "<< *ptr<<std::endl;
    std::cout << "The count of the reference before weak pointer and crating shared ptr = "<<ptr.use_count()<<std::endl;
    std::shared_ptr<int> share_ptr = ptr;
    std::cout << "The count of the reference after weak pointer and crating shared ptr = "<<ptr.use_count()<<std::endl;
    return 0;
}