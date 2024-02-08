#include<iostream>
using namespace std;
struct Node 
{
    int data;
    struct Node *next;   
};
struct Node *first;
void create(int array_1[], int length)
{
    struct Node *last, *temp;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = array_1[0];
    first->next = NULL;
    last = first;
    for(int i = 1; i < length ; i++)
    {
        temp->data = array_1[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}
int counting(int &count, struct Node * p)
{
    while(p != NULL)
    {
        count++;
        p = p->next;
    }
    return count;
}

int main()
{
    int array_1[] = {1, 2, 3, 4};
    create(array_1, 4);
    int count = 0;
    counting(count , first);
    cout << "The count of the list is "<< count<< endl;
    
    return 0;
}