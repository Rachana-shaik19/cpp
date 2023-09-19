#include<iostream>
#include<string>
using namespace std;
class Player
{
    public:
        string name ;
        int health ;
        int xp;
    public:    
        void talk(string text_to_say) {cout << name <<" says "<< text_to_say << endl;}
        bool is_dead();


};
bool Player::is_dead()
{
    return true;
}
class Account :public Player
{
    string name; 
    double balance;

    bool deposit(double ball);
    bool withdraw(double ball);
 
};

   int main()
{
    Player frank ;
    frank.name = "frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("Hi there!");

    Player *enemy = new Player;
    (*enemy).health = 100;
    enemy->name = "Enemy";
    (*enemy).xp = 15;
    (*enemy).talk("Hello");
    delete enemy ;
    return 0;
}
/*
* @param  
*/