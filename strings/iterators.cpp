#include<iostream>
int main()
{
    std::string str ;
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
}



