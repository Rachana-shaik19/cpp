#include<iostream>
using namespace std ;
class Person
{
    private:
        string name;
    public:
        int age ;
    public:
        Person(string name , int age)
        {
            this->name = name ;
            this->age = age ;
        }
        Person(){}
        int getAge() const {return age;}
        // void setAge(int age){this->age =  age;}

        const string& getName() const{return name;}

        void display()
        {
            cout<< "The name of the person is "<< name << " and age is "<<age<<".\n";
        }
};
class Student: public Person
{
    private :
        string standard;
        float grades ;
    
    public :
    Student(string name ,int age ,  string standard, float grades):Person( name, age)
    {
        this->grades = grades ;
        this->standard = standard;
    }
    Student(){}
    // const string& getStandard() const { return standard; }
    // void setStandard(const string standard) { this->standard = standard; }

    // float getGrades() const{ return grades; }
    // void setGrades(float grades){ this->grades = grades; }

    void display()
    {
        cout<<"The student "<< getName()<< " is in "<<standard<< " with current grade "<< grades <<" and age is "<<age<< ".\n";
    }

};

//Assignment 
// 1. Base class object
// int main()
// {
//     Student s1("Riya", 18, "UG");
//     Person p1;
//     p1 = s1;
//     p1.display();
// }


//2. Base class pointer 
// int main()
// {
//     Student s1("Riya", 21, "PG");
//     Person *personPtr = &s1;

//     personPtr->display();
//     cout << personPtr->getName();
//     return 0;
// }


// 3. Reference Variable of Base Class

int main()
{
    Student s1("Riya", 23, "PHD", 67.5);
    Person referenceBase = s1;
    referenceBase.age = 24;
    referenceBase.display();
    // s1.setGrades(32.1);
    cout<<referenceBase.getAge()<<endl;
    s1.display();
    return 0;
}
