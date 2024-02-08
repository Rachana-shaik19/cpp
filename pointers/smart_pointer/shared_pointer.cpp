#include<iostream>
#include<memory>
auto shared_pointer()
{
    return ;
}
int main()
{
    std::shared_ptr<int>ptr (new int(32));
    std::shared_ptr<int>ptr_copy = ptr; 
    std::shared_ptr<int> ptr_new_copy (new int(*ptr));
    if(ptr !=  NULL && ptr_copy != NULL)
    {
        std::cout << "ptr and ptr_copy both are Not NULL"<< std::endl;
    }
    else 
    {
        std::cout << "ptr is NULL"<< std::endl;
    }
    std::cout << "Shared pointer reference count "<< ptr.use_count()<<std::endl;
    std::shared_ptr<int>ptr_copy_move = std::move(ptr);
    if(ptr == NULL)
    {
        std::cout << "ptr is NULL"<< std::endl;
    }
    else
    {
        std::cout <<"Ptr is not NULL "<< std::endl;
    }
    
    return 0;
}