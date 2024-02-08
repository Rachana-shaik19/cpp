#include<iostream>
// using namespace std;
class Person
{
    public:
    // const char* name;
        int* age ;

        Person(int* age)
        {
            this->age = age;
        }
};
int main()
{
    int age = 48 ;
    Person p(&age);
    char* ch = reinterpret_cast<char*>(p.age);
    std::cout << "Character is: "<< *ch<< std::endl;
    // std::cout << p.age<< "\n";
    return 0;
}