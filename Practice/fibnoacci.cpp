#include<iostream>
using namespace std ;
int main()
{
    int number_1 = 0;
    int number_2 = 1;
    int limit;
    cout << "enter the limit = ";
    cin >> limit ;
    for(int i = 0; i < limit ; i++)
    {
        int number = number_1 + number_2;
        cout << number << " ";
        number_1 = number_2;
        number_2 = number;
    }
    return 0;
}
