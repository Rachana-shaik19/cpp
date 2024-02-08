#include<iostream>
#include<memory>
class Shared_ptr
{
    int shared_ptr()
    {
        return 0;
    }
};
int main()
{
    std::shared_ptr<Shared_ptr> ptr(new Shared_ptr());
    
    return 0;
}
