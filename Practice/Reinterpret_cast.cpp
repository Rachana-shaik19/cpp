#include <iostream>

class Person {
public:
    int* age;

    Person(int* age) {
        this->age = age;
    }
};

int main() {
    int *age = new int(48);
    Person p(age);
    char* ch = reinterpret_cast<char*>(p.age);
    std::cout << "Character is: " << *ch << std::endl;
    delete age;
    return 0;
}
