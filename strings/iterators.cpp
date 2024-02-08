#include<iostream>
// using namespace std;
int main()
{
    std::string str ;
    std::cout<<"Enter the string ";
    std::getline(std::cin, str);
    std::string::iterator it;
    for(std::string::iterator it = str.begin(); it != str.end(); ++it)
    {
        std::cout << *it  ;
    }
    std::cout<<std::endl;
    // for( it = str.end(); it != str.begin(); --it)
    // {
    //     std::cout << *it;
    // }
    std::string::reverse_iterator rit;
    for( rit = str.rbegin(); rit != str.rend(); ++rit)
    {
        std::cout << *rit;
    }
    std::cout<< *rit;
    std::cout<<std::endl;
    str.erase(str[2]);
    std::cout << "The string after erasing "<< str << std::endl;
    return 0;
}



