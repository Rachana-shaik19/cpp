#include<stack> // Last in First Out
#include<iostream>
#include<list>
using namespace std ;

int main()
{
    //initialising 
    stack<int> stack_1;
    stack<int , list<int>> stack_list;

    //inserting the elements 
    stack_list.push(12);
    stack_list.push(0);
    
    //tranversing 
    cout <<"Last element : "<< stack_list.top()<< endl;
    while(!stack_list.empty())
    {
        cout<< stack_list.top()<< " ";

        //deletion
        stack_list.pop();
    }
    cout <<"\n";

    //length of the stack 
    cout << "Length of the stack: "<<stack_list.size()<<endl;
    return 0;
}