#include<iostream>
#include<cstring>
#include<string>
int string_function(std::string, std::string);
int main()
{
    char str[50] = "Rachana";
    char str_2[] = " Value";
    std::string str1 = "Shaik";
    std::string str_5 ;
    getline(std::cin, str_5);
    char str_4[50] ;
    std::cin.getline(str_4, 50);
    strcat(str, str_2);
    std::cout<< str<< std::endl;
    str1.append(" add");
    std::cout<<"str1 = "<<str1<< std::endl;
    std::cout<<"str_4 = "<<str_4<< std::endl;
    std::cout<<"str_5 = "<<str_5<< std::endl;
    std::cout<<"length = "<<str1.length()<< std::endl;
    str1.swap(str_5);
    std::cout<<"swap str1 = " <<str1 << "str_5 = "<< str_5<< std::endl;
    std::cout<<"Compare = " <<str1.compare(str1)<< std::endl;
    // std::cout<< "Substring = " << str1.substr(20, 30)<< std::endl; (out of range exception)
    std::cout<<"size = " <<str1.size()<< std::endl;
    str1.resize(20);
    std::cout<<"Resize = " <<str1.size()<< std::endl;
    std::cout<< "Replace string = " << str1.replace(20, 30, "dfhf")<< std::endl; // if it is not the range of the string it will raise an exception
    std::cout<<"charat = " <<str1.at(9)<< std::endl;
    size_t found = str1.find("Shaik");
    if(found != std::string::npos)
    {
        std::cout<<"Found"<< std::endl;
    }
    str1.insert(str1.length(),"shaik");

    std::cout<<"insert substring = " <<str1<< std::endl;
    str_5.insert(7, "otherStr", 0, 3);
    std::cout<<"insert with spanning of str_5 = " <<str_5<< std::endl;
    string_function(str1, str_5);
    return 0;
    
}
int string_function(std::string str1, std::string str_5)
{
    std::cout << str_5.max_size()<<std::endl; 
    str1.push_back('s');
    std::cout<<"str1 = "<<str1<< std::endl;
    return 0;
}