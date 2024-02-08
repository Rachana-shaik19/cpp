#include<iostream>
#include<fstream>
using namespace std ;

int main()
{
    ifstream streamObject("My_file.txt");

    //using another method to open a file 
    ifstream my_file;
    my_file.open("My_File_1.txt");
    // streamObject.open("my_file.txt");
    if(streamObject.is_open())
    {
        // char mychar ;
        // while(my_file.good())
        // {
        //     mychar = my_file.get();
        //     cout <<mychar;
        // }
        cout << "File is opened"<<endl;
    }
    return 0;
}