#include<iostream>
using namespace std ;
class Class_1
{
    public: 
       string student_name ;

       void Print_name()
       {
            cout << "student name is: "<< student_name << endl;

       }

};
int main()
{
    Class_1 c1, c2 ;
    c1.student_name = "Rachana Shaik";
    c2.student_name = "Revanth";
    c2.Print_name();
    c1.Print_name();
    return 0;
}
/*
-> class is user defined data type which holds own data members, member functions
-> It is bule print of an object 
-> No memmory is allocated till object is created
*/