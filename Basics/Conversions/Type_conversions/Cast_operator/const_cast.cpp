#include<iostream>
// using namespace std ;
class Person
{
    public :
        const char* name ;
        const int* age ;

    Person(){}

    Person(const char* name, const int* age)
    {
        this->name = name ;
        this->age = age;
    }

    void details()
    {
        std::cout << "Name is "<< name << " age is "<< age << std::endl;
    }
};
int main()
{
    int age = 22;
    const char* name = "Riya";
    Person p(name, &age);
    int* p_age = const_cast<int*>(p.age);
    std::cout << "The before change age is "<< *p.age<< std::endl;
    *p_age =  23;
    std::cout << "The after change age is "<< *p.age<< std::endl;
    return 0;
}