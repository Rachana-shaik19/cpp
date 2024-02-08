#include<iostream>
#include<map>
using namespace std ;
int brace_operator(map<int , string> map_name)
{
    // inserting and assigning value using [] operator 
    cout << "for [] opertor "<<endl;
    map_name[0] =  "Riya";
    map_name[2] = "Revanth";
    map_name[1] = "Rachana";
    // map_name.at(4) = "Siva";
    cout << map_name[2]<<endl;
    cout<<"*******************************"<<endl;
    return 0;
}
int at_operator(map<int , string> map_name)
{
    cout <<"for accessing through at operator"<<endl;
    map_name[0] = "Rachana";
    map_name[1] = "Pavitra";
    cout << map_name.at(1)<< endl;
    cout<<"*******************************"<<endl;
    return 0;
}
int modifers(map<int , string> map_name)
{
    cout <<"Using modifiers "<<endl;
    map_name.insert({0,"siva"});
    map_name.insert({1, "Balaji"});
    cout<<map_name.at(0)<<endl;
    map_name.erase(0);
    cout<<"Atfer earsing key value "<<map_name[0]<<endl;
    cout<<"value of 1 "<<map_name[1]<<endl;
    map_name.clear();
    cout<<"Atfer clearing key value "<<map_name[0]<<endl;
    cout<<"*******************************"<<endl;
    return 0;
}
int iterators(map<int , string> map_name)
{
    cout << "using the iterators "<< endl;
    map_name[0] = "Krishna";
    map_name[1] = "Radha";
    for(auto it = map_name.begin(); it != map_name.end(); it++)
    {
        cout<< "Key: "<<it->first << " value: " << it->second<< endl;
    }
    cout <<"For reverse iterating "<< endl;
    for(auto it = map_name.rbegin(); it != map_name.rend(); it++)
    {
        cout<< "Key: "<<it->first << " value: " << it->second<< endl;
    }
    cout<<"*******************************"<<endl;
    return 0;
}
int searchCount(map<int, string> map_name)
{
    map_name[0] = "Rama";
    map_name[1] = "Riya";
    
    cout<< "For count and search "<<endl;
    auto value = map_name.find(0);
    cout << "count of 0 key " << map_name.count(0)<< endl;
    cout<<"Key is "<<value->first << " value is "<<value->second<< endl;
    cout<<"*******************************"<<endl;
    return 0;
}
int main()
{
    map<int , string> map_name;
    // at_operator(map_name);
    // brace_operator(map_name);
    // modifers(map_name);
    // iterators(map_name);
    searchCount(map_name);
    return 0;
}

