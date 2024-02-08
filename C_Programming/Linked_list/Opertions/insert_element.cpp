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
void insert(int position, Node* p, int& data_1)
{
    int count = 0;
    if(position == 1)
    {
        Node* t = (Node*)malloc(sizeof(Node));
        t->data = data_1;
        t->next = first;
        first = t;
    }
    else
    {
        while(p != NULL)
        {
            // Node* q = NULL;
            count++;
            int node_position = position - 1;
            if(count == node_position)
            {
                printf("position = %d and count = %d", count , node_position);
                Node* temp = (Node*)malloc(sizeof(Node));
                temp->data = data_1;
                temp->next = p->next;
                p->next = temp;
                return ;
            }

            p = p->next;

        }
    }
    
    return ;
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
    insert(1, first, data_1);
    printf("After insert the element: ");
    transverse(first);
    return 0;
}