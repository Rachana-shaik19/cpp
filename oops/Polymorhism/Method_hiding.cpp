#include<iostream>
using namespace std ;
class Polygon
{
    protected: 
        int height, width;
    public :
        void setValues(int height , int width)
        {
            this->height = height ;
            this->width = width ;
        }
        int area()
        {
            return 1;    
        }
};


class Rectangle:public Polygon
{
    public:
    int area()
    {
        return height * width ;
    }
};


class Triangle: public Rectangle
{
    public:
    int area()
    {
        return ( width * height) / 2;
    }
};

int main()
{
    Rectangle r_area ;
    Triangle t_area;
    Polygon p_area;
    Polygon* R1_area = &r_area;
    Polygon* T1_area = &t_area;
    r_area.setValues(30,40);
    p_area.setValues(10,20);
    // R1_area->setValues(2, 20);
    T1_area->setValues(10, 30);
    cout<<"Area of Rectangle "<<r_area.area() << endl;
    cout<<"Area of triangle "<<t_area.area() << endl;
    cout<<"Area of Polygon "<<p_area.area() << endl;
    cout <<"***************************************"<<endl;
    cout<<"Area of Rectangle "<<R1_area->area() << endl;
    cout<<"Area of Rectangle "<<T1_area->area() << endl;
    // delete R1_area;
    // delete T1_area;
    return 0;
}