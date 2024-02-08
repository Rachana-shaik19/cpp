#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> single_list = {1, 2, 3};
    for(auto i = 0; i < 5 ; i++ )
    {
        single_list.push_front(i);
    }
    int count = 0;
    for(int i : single_list)
    {
        count++;
        cout << i << " ";
    }
    cout << "\n";
    // auto *value =
    for(auto it = 0; it < count ; it++)
    {
        // int value = 
        // cout << "Value is " << value << endl;
        single_list.pop_front();
    }
    if(single_list.empty())
    {
        cout<< "List is empty";
    }
    else 
    {
        cout << "List is not empty";
    }
    return 0;
}