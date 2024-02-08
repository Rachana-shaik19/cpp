#include<iostream>
// using namespace std;
class Dynamic_cast_base
{
    public:
        virtual ~Dynamic_cast_base()
        {
            std::cout<< "Destructor is called"<<std::endl;
        }
        virtual void function()
        {
            std::cout<<"base function is called "<<std::endl;
            return ;
        }
};
class Dynamic_cast_derived:public Dynamic_cast_base
{
    public:
        void function()
        {
            std::cout << "Derived function is called"<<std::endl;
            return;
        }
        virtual ~Dynamic_cast_derived()
        {
            std::cout<<"Dynamic_cast_derived destructor is called"<<std::endl;
        }
};
int main()
{
    Dynamic_cast_base *b = new Dynamic_cast_base;
    Dynamic_cast_derived *d = dynamic_cast<Dynamic_cast_derived*> (b);
    if(d !=  NULL)
    {
        std::cout <<"Dynamic_cast is done"<<std::endl; 
    }
    else 
    {
        std::cout <<"Dynamic cast is not done"<<std::endl;
    }
    delete b;
    // delete d;
    return 0;
}