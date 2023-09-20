#include<iostream>
int main()
    {
        std::cout << " heloo" << std:: endl; 

        int a[5];
        for(int i=0; i< 5; i++)
            {
                std::cin >> a[i];
            }
        
        for(auto i: a)
            std::cout << i << " " ; 


        return 0;

    }