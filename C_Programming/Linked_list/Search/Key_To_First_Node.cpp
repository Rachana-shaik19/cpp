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
bool keyToFirstNode(Node* p, int key)
{
    Node * q = NULL;
    bool found = false ;
    while(p != NULL)
    {
        
        if(p->data == key)
        {
            
            found = true;
            q->next = p->next;
            p->next = first;
            first = p;
        }
        q = p;
        p = p->next;
    }
    
    return found;
}
void transverse(Node * p)
{
    while(p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    int element = 10;
    create(6);
    bool found = keyToFirstNode(first, element);
    transverse(first);
    if(found == true)
    {
        printf("The element %d is moved to first node", first->data);
    }
    else
    {
        printf("The element %d is not in the list", element);
    }
    return 0;
}