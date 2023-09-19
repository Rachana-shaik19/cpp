#include<iostream>

void init();
void end();
void __attribute__((constructor)) init();
void __attribute__((destructor)) end();

using namespace std ;

int main()
{
    cout << "main function "<< endl;
    return 0;
}
void init()
{
    cout << "initial function for constuctor for #Pragma startup "<< endl;
    return ;
}

void end()
{
    cout << " Endfunction for destuctor #Pragma exit "<< endl;
    return ;
}