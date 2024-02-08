#include<iostream>
#include<map>
using namespace std;
int main()
{
    multimap<string, int> multi_map;
    multi_map.insert(pair<string, int>("Rachana", 0));
    auto my_pair = make_pair("reva", 5);
    multi_map.insert(make_pair("Reva", 32));
    multi_map.insert(my_pair);
    multi_map.insert(pair<string, int>("Riya", 1));
    multi_map.insert(pair<string, int>("Krishna", 2));
    multi_map.insert(pair<string, int>("Radha", 3));
    multi_map.insert(pair<string, int>("Rachana" , 4));
    cout << "Count of Rachana is "<< multi_map.count("Rachana")<< endl;
    for(auto i : multi_map)
    {
        cout << "Key value is "<< i.first <<" and value is "<<i.second<<endl;

    }
    cout<< "**********************************************"<<endl;
    multi_map.erase("Rachana");
    for(auto i = multi_map.begin(); i != multi_map.end(); i++)
    {
        cout << "Key value is "<< i->first <<" and value is "<<i->second<<endl;
    }
    cout << "Max length is "<< multi_map.max_size()<< endl;

    return 0;
}
    

