#include<iostream>
using namespace std ;
int totalMoney(int n)
    {
        int days = 1;
        int weeks = n / 7;
        int remaining_days = n % 7 ;
        int sum = 0; 
        int value ;
        for(int j = 1; j <= weeks; j++)
        {
           for(value = 1 ; value < j + 7; value++ ) 
           {
               sum += value;
            }
        }
        if(remaining_days > 0)
        {
            // while(int fill <)
            for(int j = weeks + 1; j <= weeks + remaining_days ; j++)
            {
                sum += j;
                
                
            }
        }
        return sum ;
    }
int main()
{
    int result = totalMoney(4);
    cout << "The sum = " <<result<<endl;
    return 0;
}

