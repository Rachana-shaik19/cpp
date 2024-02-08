#include<iostream>
using namespace std ;
int main()
{
    string s = "abatr";
    string str;
    for(auto it = s.rbegin(); it != s.rend(); it++)
    {
        str.push_back(*it);
    }
    for(auto it = s.rbegin() ; it != s.rend(); it++)
        {
            str.push_back(*it);
        }
    return 0;
}