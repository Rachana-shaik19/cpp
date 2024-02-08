#include <iostream>

int main() {
    int number = 12345;

    // Using reinterpret_cast to treat 'number' as an array of bytes
    unsigned char* bytePtr = reinterpret_cast<unsigned char*>(&number);

    std::cout << "Original Integer: " << number << std::endl;
    std::cout << "Individual Bytes: ";

    // Printing individual bytes
    for (size_t i = 0; i < sizeof(int); ++i)
    {
        std::cout << bytePtr[i] <<" : " ;
        std::cout << static_cast<int>(bytePtr[i]) << " ";
        std::cout <<"\n";
    }

    std::cout << std::endl;

    return 0;
}
