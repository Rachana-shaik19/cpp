#include<iostream>
using namespace std ;
class Implicit
{
    public :
        int num1 , num2 ;

    Implicit(int num1 , int num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }

    bool compareValue()
    {
        if(num1 < num2)
        {
            cout<<"The num1("<<num1<<") is less than num2("<<num2<<")\n";
            return false;
        }
        else if(num1 > num2)
        {
            cout<<"The num1("<<num1<<") is greater than num2("<<num2<<")\n";
            return true ;
        }
        else 
        {
            cout<<"The num1("<<num1<<") and num2("<<num2<<") both are equal.\n";
            return true;
        }
    }
};
int main()
{
    Implicit value(32.3, 43.43);
    bool result = value.compareValue();
    if (result == true)
    {
        cout <<" The given values are greater or equal" << endl;
    }
    else 
    {
        cout <<" The given values are less" << endl;
    }
    return 0;
}