#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name = "lol";
    string reverse = "";
    int size = name.length();
    for(int i = size - 1; i >= 0 ; i--)
    {
        reverse += name.at(i);
    }
    cout << reverse<< " is the reversed string of " << name << endl;
    return 0;
}