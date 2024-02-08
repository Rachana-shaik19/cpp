#include<iostream>
using namespace std ;
class Throw
{

    public :
        int a ;
        int b ;
        Throw(int a , int b)
        {
            this->a = a ;
            this->b = b;
        }

        int division()
        {
            if (b == 0)
            {
                throw "Division by zero";
            }
            return int(a / b);
        }

};
int main()
{
    try
    {
      Throw t(20, 0);
       int answer = t.division();
        cout << "Output: " << answer << endl;
    }
    catch(const char *errorMessage)
    {
        std::cerr << errorMessage << '\n';
    }
    
    return 0;
}