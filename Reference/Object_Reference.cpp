#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;

    Person(const std::string& n, int a) : name(n), age(a) {}
};

// Function that modifies a Person object by reference
void celebrateBirthday(Person& person) {
    person.age++;
}

int main() {
    Person john("John", 30);

    std::cout << "Before celebrating birthday: " << john.name << " is " << john.age << " years old." << std::endl;

    // Pass the Person object by reference to the function
    celebrateBirthday(john);

    std::cout << "After celebrating birthday: " << john.name << " is " << john.age << " years old." << std::endl;

    return 0;
}
