#include<iostream>
#include<map>
using namespace std ;
int main()
{
    map<int, char> mp;
    mp.insert(pair<int, char>(0, 'w'));
    mp.insert(pair<int , char>(1, 'i'));
    mp.insert(pair<int , char>(2, 'n'));
    mp.insert(pair<int, char>(3, 'd'));
    mp.insert(pair<int , char>(4, 'o'));
    mp.insert(pair<int, char>(5, 'w'));
    cout << "The map is: "<<endl;
    cout << "Key -> value"<< endl;
    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << " "<<it->first<< "  ->  "<< it->second <<endl;
    }
    mp.erase(mp.upper_bound(3), mp.end());

    // while(it != mp.end())
    // {
    //     cout << *it << endl;
    //     mp.erase(it);
    // }
    cout << "After earsing the map is: "<<endl;
    cout << "Key -> value"<< endl;
    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << " "<<it->first<< "  ->  "<< it->second <<endl;
    }
    auto max_length = mp.max_size();
    cout << "Max length is "<< max_length << endl;
    return 0;
}

