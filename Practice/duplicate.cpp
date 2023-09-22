#include<iostream>
using namespace std ;
int main()
{
    int array[] = {12,32, 43, 32, 54, 54, 43, 43};
   
    int number = 0;
    int size = sizeof(array) / sizeof(int);
     bool check[size] = {false};
    for(int i = 0 ; i < size; i++)
    {
        
        int count = 0;
    
        if(check[i] == false)
        {
            check[i] = true;
            for(int j = i + 1 ; j < size ; j++)
            {
                if(array[i] == array[j])
                {
                    count++;
                    check[j] = true;  
                }   
            }
            if(count == 2)
            {
                cout << array[i]<< endl;
                number++;
            }
        }

    }
    cout << "count = " << number << endl;
    return 0;
}