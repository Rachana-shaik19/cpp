#include<iostream>
using namespace std ;
#define area(l , b) (l * b)
int main()
{
    int l = 3, b = 5;
    int area_of_rectangle = area(l, b);
    cout << "Area of rectangle " << area_of_rectangle<< endl;
    return 0;
}