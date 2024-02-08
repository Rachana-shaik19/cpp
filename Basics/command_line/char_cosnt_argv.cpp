#include <iostream>
int main()
 {
    // Print command-line arguments
    
    const char* a = "Hello\0world";
    std::cout << a << std::endl;
    std::cout << *a << std::endl;
    return 0;
}
