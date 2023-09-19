#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    label1: 
        i++;
    cout<< i <<endl;
    if(i > 4)
        goto label1;
    if(i < 10)
        goto label2;
    label2:
        return 0;
} 

