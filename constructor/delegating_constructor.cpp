#include<iostream>
#include<string>
using namespace std ;
class Player
{
    public:
        string name ;
        int age ;
        string skill;
    Player(string name_1 , int age_1 , string skill_1): name {name_1}, age{age_1}, skill{skill_1} {}
    Player():Player{"None", 0, "None"} {}
    void specifications()
    {
        cout<< "Player name is " << name <<"\n"<< "age is " << age <<"\n"<< "skill is " << skill <<endl; 
    }
};
int main()
{

    Player riya("Riya", 22, "badminton");
    Player empty;
    empty.specifications();
    riya.specifications();
}