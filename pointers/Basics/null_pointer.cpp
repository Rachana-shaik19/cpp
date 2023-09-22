#include<iostream>
int null_pointer()
{

    return 0;
}
int main()
{
    int * prt = NULL;
    int * prt_1 = nullptr;
    int * prt_2 = 0;
    std::cout<< *prt << std::endl;
    std::cout<< *prt_1 << std::endl;
    std::cout<< *prt_2<< std::endl;
    delete prt, prt_1, prt_2;
    return 0;
}