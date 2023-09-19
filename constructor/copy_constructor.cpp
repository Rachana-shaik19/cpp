#include<iostream>
using namespace std ;
class Sample
{
    int id ;
    int roll_no;
    public:
    void function(int x)
    {
        id = x;
    }
    void intit(int x)
    {
        id = x;
    }
    Sample()
    {

    }
    Sample(const Sample& ptr)
    {
        id = ptr.id;
        roll_no = 212184;
    }
    void display()
    {
        cout << "ID = "<< id<< endl;
        cout << "Roll no = "<< roll_no << endl;
    }
};
int main()
{
    Sample obj;
    obj.function(30);
    obj.intit(20);
    obj.display();
    obj.function(40);
    Sample obj1(obj);
    obj1.display();
    return 0;
}