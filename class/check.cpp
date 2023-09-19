#include<iostream>
class A
    {
        public:
        void print()    
            {
                std::cout << "Printing " << std:: endl;
            }
       
    };


int main()
    {
        A obj;
        obj.print();
        return 0;
    }