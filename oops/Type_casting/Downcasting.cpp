#include<iostream>
using namespace std;
class Person
{
    private:
        string name ;
        int age ;
    public:
        Person(string name, int age)
        {
            this->name = name;
            this->age = age ;
        };

        Person(){}
        
        int getAge(){return this->age;}
        void setAge(int n){age = n;}

        const string& getName() const{this->name;}

        void display()
        {
            // cout << "The name of the person is "<< this->name << " and age is "<< this->age << endl;
            cout << "The name of the person is "<< this->name << " and age is "<< getAge() << endl;
        }
};
class Student : public Person
{
    private :
        string standard ;
        float grades;
    
    public:
        Student(string name , int age , string standard): Person(name, age)
        {
            this->standard = standard;
        };

        Student(){}

        const string& getStandard()const {return this->standard;}
        void setStandard(const string standard){this->standard = standard;}

        float getGrades(){return this->grades;}
        void setGrades(float grades){this->grades = grades;}

        void display()
        {
            cout << "The student name is "<< getName() << " standard is "<< this->standard << " , grades are "<< this->grades <<" and age is "<<getAge()<< endl;
        }
};
int main()
{
    Person *person_obj = new Student("Chandu", 22, "D");
    Student* student_obj = static_cast<Student*>(person_obj);
    student_obj->setGrades(67.5) ;
    student_obj->display();
    
    return 0;
}