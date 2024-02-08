#include<iostream>
#include<set>
using namespace std ;
int main()
{
    set<int> set_1 ;

    //intialising 
    set_1 = {21, 43, 54};

    //initialising the elements in in descending order 
    //set<datatype, greater<datatype>> name_of_set;
    set<char ,greater<char> >  greater_order = {'e', 'r', 'v', 'a'} ;
    cout << "Arranging characters in descending order: ";
    for(auto i : greater_order)
    {
        cout << i << " ";
    }
    cout << "\n";

    //inserting 
    set_1.insert(21);
    set_1.insert(1);
    set_1.insert(10000);
    set_1.insert(43);
    set_1.insert(43);
    auto max_value = set_1.rbegin();
    auto min_vaiue = set_1.begin();
    auto second_max_value = next(set_1.rbegin(), 1);
    auto second_min_value = next(set_1.begin(), 1);
    cout<< "Max value: " << *max_value<< endl;
    cout<< "Second Max value: " << *second_max_value<< endl;
    cout<< "Second min value: " << *second_min_value<< endl;
    cout << "Min value: " << *min_vaiue << endl;

    //emplace() same like the insert() inserting the element 
    set_1.emplace(68);

    //Transversal using begin() and end() iterator function
    for(auto it = set_1.begin(); it != set_1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";

    //coping 
    set<int> copy_set_1(set_1);
    cout << "copy of the set: ";
    for(auto i : copy_set_1)
    {
        cout << i<< " ";
    }
    cout << "\n";

    //deletion
    copy_set_1.erase(copy_set_1.begin(), copy_set_1.find(1)); //range of element is deleting , last element won't be deleted because of open brackets 
    copy_set_1.erase(copy_set_1.find(10000));
    copy_set_1.erase(21);

    //to clear all element in the set at a time 
    copy_set_1.clear();

    //Transversal using for each loop
    cout <<"After deletion of the elements in the set: ";
    for(auto i : copy_set_1)
    {
        cout<<i <<" ";
    }
    cout <<"\n";

    //Transversal using rbegin() and rend() iterator function
    cout << "Reversing or the set: ";
    for(auto it = set_1.rbegin(); it != set_1.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";

    //transversing using for each loop
    cout << "Using for each loop transversing set_1"<< endl;
    for(auto i  : set_1)
    {
        cout << i << " ";
    }
    cout << "\n";

    //capacity
    //checking the length of the set
    auto length_set_1 = set_1.size();
    cout << "Length of the set_1 is "<< length_set_1<< endl;

    //checking if the set is empty or not 
    if(copy_set_1.empty())
    {
        cout << "copy_set_1 is empty"<< endl;
    }
    else
    {
        cout << "copy_set_1 is not empty"<< endl;
    }

    //to get max size of the set 
    auto max_size_set_1 = set_1.max_size();
    cout << "max size of the set_1 = "<< max_size_set_1<<endl;

    // swap the element of two sets
    swap(copy_set_1, set_1);

    cout << "size of copy_set_1 "<< copy_set_1.size()<<endl;
    cout << "size of set_1 "<< set_1.size()<<endl;

    //count() to get number of time a element is their or check wether it present or not  
    //in set it return 1 because no duplicate is allowed 
    cout << "count element 1000 is "<< copy_set_1.count(1000)<< endl;

    return 0;
}