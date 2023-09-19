#include<iostream>
using namespace std;
#define PI 3.14
int main()
{
    #ifdef PI
        cout << "PI value: "<< PI << endl;
    #elif AGE
        cout << "Age is "<< AGE << endl;
    else 
        printf("Not defined\n");
    #endif
    return 0;

}