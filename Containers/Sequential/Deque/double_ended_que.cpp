#include<iostream>
#include<deque>
using namespace std ;
int main()
{
    //declaring 
    deque<int> dq;

    //intialising in back 
    dq.push_back(1);

    //deltion in front 
    dq.pop_front();
    for(int i = 0 ; i < 5; i++)
    {
        dq.push_back(i);
        dq.push_front(i);
    }
    cout << "Elements in the queue: ";

    for(auto it = dq.begin(); it != dq.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for(auto it = dq.begin(); it != dq.end(); it++)
    {
        dq.pop_back();
        // dq.pop_front();
    }
    cout << "Elements after pop_back() in the queue: ";

    for(auto it = dq.begin(); it != dq.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    auto check = dq.empty();
    cout << "Checking the queue whther it empty or not "<< check<< endl;
    dq.push_back(2);
    check = dq.empty();
    cout << "Checking the queue whther it empty or not "<< dq.empty()<< endl;
    
    return 0;
}
