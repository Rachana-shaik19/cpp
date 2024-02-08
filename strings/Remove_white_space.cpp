#include <iostream>
    #include <string>
    #include <algorithm>
    using namespace std;
    int main() 
    {
        string s = "spaces in text";
        auto new_s = remove(s.begin(), s.end(), ' ' );
        cout<<"sizeof(s) before erase "<< sizeof(s)<<endl;
        for(auto i = new_s; i != s.end(); i++)
        {
            cout << *i ;
        }
        cout <<"\n";
        s.erase(new_s, s.end() ) ;
        cout<<"sizeof(s) after erase "<< sizeof(s)<<endl;
         for(auto i : s)
        {
            cout << i ;
        }
        cout <<"\n";
        return 0;
    }

