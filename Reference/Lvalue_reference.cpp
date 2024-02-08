#include<iostream>
int l_value()
{

    return 0;
}
int main()
{
    int val = 10;
    int &val_ptr = val;
    std::cout<<"val = "<< val<<std::endl ;
    val_ptr = 21;
    std::cout<<"Changed reference val = "<< val<<std::endl ;
    return 0;
}
