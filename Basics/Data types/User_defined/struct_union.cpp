#include<iostream>
using namespace std ;
struct student
{
    string name ;
    char roll_no[10];
};
union test
{
    int num ;
    long long int num_1 ;
};

int main()
{
    struct student s1 ;
    cout << "Size of struct_student() "<< sizeof(s1) << endl;
    union test t1;
    cout<< "size of union_test() " << sizeof(t1)<< endl;
    return 0;
}
