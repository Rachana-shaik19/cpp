#include<iostream>
#include<set>
#include<ctime>
// #include<cstdlib>
using namespace std ;
void builds(multiset<int> &random)
{
    // int * s
    srand(time(nullptr));
    for(int j = 1; j <= 25 ; j++)
    {
        random.insert(rand() % 10000 + 1);
    }
    return ;
}
void prints(const multiset<int> random)
{
    for(auto y : random)
        cout << y << " ";
    cout <<"\n";
}
int main()
{

    multiset<int> random ;
    builds(random);
    prints(random);
    return 0;
}