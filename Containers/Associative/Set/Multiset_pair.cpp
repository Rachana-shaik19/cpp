#include<iostream>
#include<set>
using namespace std ;
int main()
{
    multiset<pair<int, int>> multi_pair = {{1, 2}, {1, 4}, {2, 1}, {3, 5}, {2, 6}, {3, 6}, {4, 1}};
    for(auto i =  multi_pair.begin(); i != multi_pair.lower_bound({3, 5}); i++)
    {
        
        cout<< i->first <<" -> "<< i->second<< endl;
        
    }
    // cout << "\n";
}