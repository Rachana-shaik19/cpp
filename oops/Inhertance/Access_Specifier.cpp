#include<iostream>
using namespace std ;
class Base_Access
{
    public: 
        int Public_member;
    protected:
        int Protected_member;
    private:
        int Private_member;

};
class Derived_Class:protected Base_Access  // public mode base class
{
    public:
        void setvalue(int value)
        {
            Public_member = value;
        }
        int getvalue()
        {   
           return  Public_member ;
            // Protected_member = 32;  
        }
    
};

int main()
{
    Derived_Class obj;
    int value = 10;
    obj.setvalue(value);
    int value_get = obj.getvalue();
    cout <<value_get << endl;;
    return 0;
}
