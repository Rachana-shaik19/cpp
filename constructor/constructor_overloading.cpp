#include<iostream>
#include<string>
using namespace std ;
class Vehicle
{
    public:
        string type ;
        long cost;
        double millege;
        double speed ;
        Vehicle(string type_name , long cost_price)
        {
            type = type_name;
            cost = cost_price;
        }
        Vehicle(long cost_price , string type_name)
        {
            type = type_name;
            cost = cost_price;
        }
        void specifications()
        {
            cout << "The type of the vehicle : "<< type << endl;
            cout << "The price of the vehicle : "<< cost << endl;
        }
        

};
int main()
{
    Vehicle bicycle("Bicycle", 10000);
    bicycle.specifications();
    cout << "***************************"<< endl;
    Vehicle car(100000, "Car");
    car.specifications();

}