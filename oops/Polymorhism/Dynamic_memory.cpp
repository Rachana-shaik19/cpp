#include<iostream>
// #include<stdlib.h>
using namespace std ;
class Memory
{
    public : 
        Memory()
        {
            cout << "Constructor is called"<< endl;
        }
         ~Memory()
         {
            cout << "Destructor is called "<< endl;
         }
};
int main()
{
    Memory* new_oper1 = new Memory; 
    // Memory* new_oper2 = new Memory(); 
    Memory* new_oper = new Memory[2]; // array of memory
    Memory* malloc_1 = (Memory*)malloc(sizeof(Memory));
    Memory* calloc_1 = (Memory*)calloc(10, sizeof(Memory));
    delete new_oper1;
    delete new_oper;
    // delete  new_oper2;
    free(malloc_1);
    free(calloc_1);
    return 0;
}