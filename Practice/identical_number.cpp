#include<iostream>
int* pointer(int* prt)
{
    return prt;
}
int main()
{
    int c = 20;
    std::cout<< "C value before changing: "<< c << std::endl;
    pointer(&c);
    std::cout << "C value after changing is "<< c <<std::endl;
    return 0;
}