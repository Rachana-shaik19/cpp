#include<iostream>
#include<string>
class Basic{
    public:
        std::string name ;

        void function()
        {
            std::cout << "Name is "<< name << std::endl;
        }

};
int main()
{
    Basic b1 ;
    b1.name = "Riya";
    b1.function();
    return 0;
}