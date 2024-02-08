#include<iostream>
#include<vector>
using namespace std ;
int main()
{
    // fill using () method
    vector<int> vector_1(5, 2);
    for(auto i = 0; i < vector_1.size(); i++)
    {
        cout << vector_1[i]<< " ";
    }
    cout<< "\n";

    // copy constructor 
    vector<int> copy_vector_1(vector_1);
    for(auto i = 0; i < copy_vector_1.size(); i++)
    {
        cout << copy_vector_1[i]<< " ";
    }
    cout<< "\n";

    //conversion array to vector
    int arr[] = {1, 2, 3};
    vector<int> array_to_vector(arr, arr + sizeof(arr)/ sizeof(int));

    // accessing elements
    cout << "2nd index element "<<array_to_vector[2]<< endl; 
    cout << "last element "<<copy_vector_1.back()<< endl;
    cout << "first element "<<array_to_vector.front()<< endl;
    return 0;
}