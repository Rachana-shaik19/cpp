#include<iostream>
#include<string>
using namespace std ;
class Sample
{
    int a, b;
    int c;
    string name ;
    public :
    Sample(int a, int b, string name)
    {
        this->a = a;
        this->b = b;
        this->name = name;
    }
    Sample()
    {
        cout << "No arg constructor"<< endl;
    }
    int swap()
    {
        cout << "a = " << a << " b = " << b << endl;

        c = a;
        a = b;
        b = c;
        cout << "a = " << a << " b = " << b << endl;
        return 0;
    }
    ~Sample()
    {
        cout << "destructor is invoked "<< name << endl;
    }
    

};
int main()
{
    int a = 10;
    int b = 20;
    Sample s(30, b, "frank");
    Sample s1;
    s.swap();
}
