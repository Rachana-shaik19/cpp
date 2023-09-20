#include<iostream>
using namespace std;
int static1(  double ,int);
int main()
{
    
    static1(21.2, 12);
    cout<< "======================="<<endl;
    static1(21.2, 12);

    return 0;
}
int static1(double var, int var2)
{
    static int var1 = 10;
    cout<< "static var2 = "<< var2<<endl;
    cout << var1<< endl;
    cout<< var<<endl;
    var1 = 120;
    return 0;
}