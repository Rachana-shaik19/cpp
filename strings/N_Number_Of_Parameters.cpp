#include <iostream>

// Example function
void function_name1(const char* fmt, const char* func, ...) {
    std::cout << "Format: " << fmt << "\nFunction: " << func << "\n";
}

// Define the variadic macro
#define function_name(FMT, ...) \
{ \
    function_name1(FMT, __PRETTY_FUNCTION__, ##__VA_ARGS__); \
}

int main() {
    // Use the variadic macro
    function_name("Hello %s!", "world");

    return 0;
}
