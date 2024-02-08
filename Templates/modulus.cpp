#include<iostream>
using namespace std ;
class Rectangle 
{
    public :
        
        int length ;
        int width ;
        
        Rectangle(int length, int width)
        {
            this->length = length ;
            this->width = width;
        }
        
        int area()
        {
            int area = length * width;
            cout << "Length is "<<length << endl;
            cout << "width is "<<width << endl;
            cout <<"area is "<< area << endl;
            return 0;
        }
        
        Rectangle operator++(int)
        {
            length++;
            width++;
        }
        Rectangle operator--(int)
        {
            length--;
            width--;
        }
};
int main()
{
    Rectangle r(3, 2);
    // Rectangle r1(3, 2);
    
    r.area();
    
    r++;
    
    r.area();
    
    r--;
    
    r.area();
    
    return 0;
}