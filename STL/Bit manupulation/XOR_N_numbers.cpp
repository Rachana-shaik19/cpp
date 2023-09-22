#include<iostream>
using namespace std ;
int XOR(int n)
{
    
    auto result = 0;
    for(auto i = 1; i <= n ; i++)
    {
        result = result ^ i;
    }
    return result;
}
int main()
{
    int n ;
    cout << "Enter n value: ";
    cin>> n ;
    cout << "Result of the xor function: "<< XOR(n)<< endl;

}