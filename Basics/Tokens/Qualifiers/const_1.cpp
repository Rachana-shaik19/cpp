#include<iostream>
using namespace std ;
int main()
{
    const float PI = 3.14;
    auto radius = 3;
    auto area_of_cirlce = PI * radius * radius;
    cout << "area of a circle = " << area_of_cirlce << endl;
    return 0;
}