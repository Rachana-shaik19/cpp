#include <iostream>
using namespace std;

int func(char, int);       // Function prototype
int (*p)(char, int) = func; // Function pointer declaration and initialization

int main() {
    (*p)('d', 9);  // Call the function using the function pointer
    p(10, 9);      // Call the function using the function pointer (alternative syntax)
    return 0;
}

int func(char c, int i) {
    cout << i << c;
    return 0;
}
