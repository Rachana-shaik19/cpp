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
Node* insert(int position, Node* p1, int& data_1)
{
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = data_1;
    temp->next = NULL;
    if(position == 1)
    {
        temp->next = p1;
        // first = temp;
        return temp;
    }
    else
    {
        Node * p = p1;
        for(int i = 1; i < position - 1 ; i++)
        {
            if(p != NULL)
            {
                p = p->next;
            }
            else
            {
                return p1;
            }
        }
        temp->next = p->next;
        p->next = temp;
        return p1;
    }
    
}
void transverse(Node* p)
{
    if(p != NULL)
    {
        printf("%d ", p->data);
        transverse(p->next);
    }
    printf("\n");
    return ;
}
int main()
{
    create(6);
    printf("Before insert the element: ");
    transverse(first);
    int data_1 = 100;
    first = insert(1, first, data_1);
    printf("After insert the element: ");
    transverse(first);
    return 0;
}