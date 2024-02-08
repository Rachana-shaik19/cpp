#include<iostream>
using namespace std;
template<class T>
class Container
{
    public:
        static int count ;
        Container()
        {
            count++;
        }
        static void increment()
        {
            
            cout << count << endl;
        }
};
template <class T >
    int Container <T> :: count = 0;
int main()
{
    Container < int > obj1;
    Container < float > obj2;
    Container < int > obj3;
    Container < int > :: increment();
    Container < float> :: increment(); 
     
    return 0; 
}