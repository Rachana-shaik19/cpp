#include<iostream>
#include<unordered_set>
using namespace std ;
int main()
{
    unordered_set<char> un_set_1;
    un_set_1.insert('r');
    un_set_1.insert('i');
    un_set_1.insert('y');
    un_set_1.insert('a');
    un_set_1.insert('r');
    cout<< "Set using for each loop: ";
    for(auto i: un_set_1)
    {
        cout<< i;
    }
    cout<< "\n";
    cout << "Set using iterator :";
    // auto it = prev(un_set_1.end(), 1);
    // while( it != un_set_1.begin())
    // {
    //     it
    //     cout << *it;
    // }
    // cout<< "\n"; error 
    return 0;
}