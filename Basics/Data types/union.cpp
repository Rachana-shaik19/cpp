#include<iostream>
#include<string>
#include<cstring>
union sample
{
   int num;
   double num_1;
   char str[50];
   std::string *str_1 ;
};
int main()
{
    sample s;
    s.num_1 = 40.438;
    strcmp(s.str, "Hello");
    s.num = 100;
    *s.str_1 = "hello";
    std::cout<<s.num<<std::endl;
    s.str_1 = nullptr;
    return 0;
}