#include<iostream>
int void_pointer(void *prt)
{
    std::cout<< *(char *)prt<< std::endl;
    std::cout<< *(int *)prt<< std::endl;
    return 0;
}
int main()
{
    char var1 = 'R';
    int var2 = 87;
    void *prt ;
    prt = &var1;
    prt = &var2;
    void_pointer(prt);
    return 0;
}