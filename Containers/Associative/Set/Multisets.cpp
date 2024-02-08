#include<iostream>
#include<set>
using namespace std ;
int main()
{
    // initialising 
    multiset<long int> multi_set;

    //inserting the elements 
    multi_set.insert(138734);
    multi_set.insert(21);
    multi_set.insert(21);
    multi_set.insert(23413);
    cout << "The multiset is ";

    // transversing 
    for(auto it = multi_set.begin(); it != multi_set.end(); it++ )
    {
        cout << *it << " ";
    }
    cout << "\n";

    //deletion 
    multi_set.erase(multi_set.begin(), multi_set.find(23413));

    //Transversing using for each loop
    cout << "The new multiset is ";
    for(auto it : multi_set )
    {
        cout << it << " ";
    }
    cout << "\n";
    return 0;
}