// #include<iostream>
// typedef int (*ptr)(int, int);
// typedef ptr (*pointer)();
// int multiply(int x , int y)
// {
//     return x * y;
// }
// ptr return_pointer()
// {
//     std::cout << "The sum is ";
//     return multiply;
// }
// int main()
// {
//     int x = 50;
//     int y = 100;
//     pointer n = return_pointer;
//     std::cout << (*n())(x, y)<< std::endl;
//     n = nullptr;
//     // ptr = nullptr;
//     // pointer = nullptr;
//     return 0;

// }
#include <iostream>
using namespace std;

// define the function pointer type
typedef int (*ptr)(int);
// typedef ptr (*pointer)();

int add(int x){
    cout << "from the add function!" << endl;
    return x + 5;
}
 
// function that returns a function pointer
ptr print(){
    cout << "The sum is ";
    
    // function pointer is returned
    return &add;
}
 
// Driver Code
int main(){
    // declare a variable
    int x = 45;
    
    // initialize a function pointer
    ptr n = print();
    
    // invoke the pointer and pass the variable as an argument
    cout << "The sum is "<< n(x)<< endl;
 
    return 0;
}
