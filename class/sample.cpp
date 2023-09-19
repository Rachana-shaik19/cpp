#include<iostream>
using namespace std ;
class Sample
{
    public:
        int number ;
        double compute_area()
        {
            return 3.14 * (double)number * (double)number ;
        }
};
int main()
{
    Sample area ;
    area.number = 10;
    cout << "Radius is "<< area.number << endl;
    cout << "Area is " << area.compute_area() << endl;
    return 0;
}