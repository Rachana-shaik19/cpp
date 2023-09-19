#include<iostream>
#include<string>
using namespace std ;
class Account
{
    public :
        int balance ;
        int withdrawn ;
        int depositted;
        string name ;
    public :
        Account(int balance_money, int withdrawn_money , string name_account)
        {
            balance = balance_money ;
            withdrawn = withdrawn_money ;
            name = name_account ;
        }
        
        void withdrawn_account()
        {
            balance -= withdrawn ;
            cout << "The withdrawn money is "<< withdrawn<< endl;
            balance_account();
        }
        void balance_account()
        {
            cout << "The balance of " << name << " is "<< balance <<endl;
        }

};
int main()
{
    Account frank(10000, 2000, "frank");
    frank.withdrawn_account();
    return 0;
}