#include<iostream>
#include<array>
int array_1(int arr[2][3])
{
    std::cout << "arr[0][1] = "<< (*arr + 1 )<< std::endl;
    arr[0][1] = 73438;
    std::cout << "arr[0][1] = "<< *(*arr + 1 )<< std::endl;
    std::cout << "arr[0][2] = "<< *(*arr + 2 )<< std::endl;
    std::cout << "arr[1][0] = "<< *(*(arr + 1))<< std::endl;
    std::cout << "arr[1][1] = "<< *(*(arr + 1)+ 1 )<< std::endl;
    return 0;
}
int main()
{
    int arr[2][3] = {{21,32,43}, {32, 54,12}};
    array_1(arr);
    std::cout << "after changing in the function arr[0][0] = "<< *(*arr + 1)<< std::endl;
    
    return 0;

}