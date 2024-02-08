#include<iostream>
using namespace std;
typedef struct Node
{
    int data;
    struct Node* next;
}Node;
struct Node *first;
void create(int length)
{   
    Node *last, *temp;
    first = (Node*)malloc(sizeof(Node));
    first->data = 50;
    first->next = NULL;
    last = first;
    for(int i = 2; i < length; i++)
    {
        temp = (Node*)malloc(sizeof(Node));
        temp->data = i * 5;
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}
bool search(Node * p, int search_element)
{
    bool element = false;
    while (p != NULL)
    {
        if(p->data == search_element)
        {
            return element = true;
        }
        else
        {
            p = p->next;
        }
    }
    return element;
}
int main()
{
    create(6);
    int element = 10;
    bool found = search(first, element);
    if(found == true)
    {
        printf("The element %d is in linked list", element);
    }
    else
    {
        printf("The element %d is not in linked list", element);
    }
}