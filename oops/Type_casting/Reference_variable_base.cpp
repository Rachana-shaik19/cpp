#include<iostream>
using namespace std ;
class Person
{
    public:
        const char* name ;
        int age ;

        Person(){}
        public:
        Person(const char* name , int age)
        {
            this->name = name ;
            this->age = age ;
        }
        void display()
        {
            cout << "Name is "<<name << " age is "<< age <<endl;
        }
};


class Student:public Person
{
    public:
        const char* name ;
        int age ;
        float percent ;
        char section ;
        
        Student( const char* name,int age , float percent , char section):Person(name, age)
        {
            this->percent = percent;
            this->section = section;
        }
        void display()
        {
            // Person::display();

            cout <<Person::name <<" "<<Person::age << " " << " section is "<<section << " percent is "<<percent<<endl;

        }
};  

int main()
{
    Student s("Riya", 23 , 67.5, 'D');
    Person &p = s;
    p.age = 27;
    p.display();
    s.display();
    return 0;
}