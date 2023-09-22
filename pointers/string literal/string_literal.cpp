#include<iostream>
#include<string>
std::string string_literal(const char *ch)
{
    // for(int i = 0 ; i < sizeof(ch) / sizeof(char*); i++)
    // {
    std::cout<< ch <<std::endl ;
    //     ch++;
    // }
    return ch;
}
int main()
{
    const char *ch = "hello";
    std::string str = string_literal(ch);
    std::cout<<str<<std::endl;
    delete ch;
    return 0;
}
