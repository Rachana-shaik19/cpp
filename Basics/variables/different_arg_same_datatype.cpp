#include<iostream>
#include<vector>

using namespace std;
int fixed_no_arguments(vector <int> arg_list)
{
    for(int i : arg_list)
    {
        cout << i << " ";
    }
    cout<< endl;
    return 0;
}

string fixed_no_arg_with_initializer(initializer_list<string> name_list)
{
    string str ;
    for(string name : name_list)
    {
        char ch = ' ';
        str +=  name;
        str += ch;
    }
    return str ;

}

int main()
{
    int a = 10;
    int a1 = 21, a2 = 32, a3 = 54;
    
    fixed_no_arguments({a, a1, a2, a3});
    cout<< fixed_no_arg_with_initializer({"Rachana", "Shaik"})<<endl;
    return 0;
}
