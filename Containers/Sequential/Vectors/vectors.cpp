#include<vector>
#include<iostream>
using namespace std ;
int main()
{
    vector<int> vec ;
    for(int i  = 1 ; i <= 10 ; i *= 2)
    {
        vec.push_back(i);
    }
    cout << "Output with vec.begin() and vec.end(): ";
    for(auto i = vec.begin(); i != vec.end(); i++)
    {
        cout << *i << " ";
    }
    cout << "\nOutput with vec.rbegin() and vec.rend(): ";
    for(auto it = vec.rbegin(); it != vec.rend(); it++)
    {
        cout << *it << " ";
    }
    cout <<endl;
    cout << "Length of the vector: "<< vec.size()<< endl;
    return 0;
}