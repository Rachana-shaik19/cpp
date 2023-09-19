#include<iostream>
#include<string>
using namespace std ;
class Initial
{
    public :
        int number ;
        double number_1;
        string str ;
    Initial():number {0}, str {"None"}{}

    Initial(string str)
    {
        this->str = str ;
    }
    Initial(double number_1);
    void sample()
    {
        cout << "String name is "<< str << endl;
        cout << "Double number is "<< number_1 <<endl;
    }
   
};
Initial::Initial(double number_1): number_1(number_1) {}
 int main()
 {
    Initial empty;
    Initial riya("Riya");
    Initial number(32.43);
    riya.sample();
    number.sample();
    return 0;
 }