#include<iostream>
#include<list>
// #include<iterator>
using namespace std;
int main()
{
    list<int> list_1 ;
    int count = 0;
    for(auto value = 0; value < 10 ; value += 2)
    {
        list_1.push_back(value);
        count++;
        list_1.push_front(value + 1);
        count++;
    }
    // list_1.insert(10); error 
    auto list_size = list_1.size();
    cout << "Size of list: " << list_size<< endl;
    cout << "count of list: " << count<< endl;
    for(auto it = list_1.begin(); it != list_1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";

    for(auto i = 0; i < list_size ;  i++)
    {
        list_1.pop_front();
    }
    
    if(list_1.empty())
    {
        cout << "List is empty"<< endl;
    }
    else 
    {
        cout << "List is not empty"<< endl;
    }
    cout <<endl;
    return 0;
}