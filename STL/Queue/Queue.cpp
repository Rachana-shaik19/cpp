#include<iostream>
#include<queue>
using namespace std ;
int main()
{
    //declaring 
    queue<int> q1;

    //initialising
    q1.push(10);
    q1.push(21);
    q1.push(32);
    q1.push(53);

    // replacing the front element 
    q1.front() = 32; 

    // check the size of queue
    cout << "The size of queue: " << q1.size() <<endl;

    //transversing from front (first in first out)
    cout << "Queue value from Front : ";
    while(!q1.empty())
    {
        
        cout << q1.front() << " ";
        q1.pop();
    }
    cout <<"\n";
    
    //accessing the back element and change it 
    cout << "accessing the last element of the queue: "<< q1.back()<<endl;

    //changing the last element 
    q1.back() = 100;
    cout << "accessing the last element after changing the queue: "<< q1.back()<<endl;
    return 0;
}