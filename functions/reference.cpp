#include<iostream>
#include<vector>
#include<string>
using namespace std ;
int reference(int& num);
int const_reference(vector<string>&);

int main()
{
    int number = 100;
    vector<string> str = {"Elena", "Rachana", "Chandu"};
    
    const_reference(str);
    reference(number);
    cout << "The changed number " << number << endl;
    return 0;
}
int reference(int &num)
{
    num = 20;
    return 0;
}
int const_reference(vector<string> &str)
{

    for(auto element : str) // it is assigning address to the element 
    {
        str[1] = "Revanth"; // so if changes happened after the assigning element changes is applied to element 
        
        cout << element << endl;
    }
    return 0;
}
