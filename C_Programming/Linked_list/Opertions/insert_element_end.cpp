#include<iostream>
using namespace std;
typedef struct Node
{
    int data;
    struct Node * next;
}Node;
Node * insert(Node* first, int x)
{
    Node *last = NULL;
    Node *t = (Node*)malloc(sizeof(Node));
    t->data = x;
    t->next = NULL;
    if(first == NULL)
    {
        first = t;
        last = t;
    }
    else
    {
        last->next = t;
        last = t;
    }
    return first;
}
void transverse(Node* p)
{
    while(p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
    return ;
}
int main()
{
    Node* temp = NULL;
    temp = insert(temp, 10);
    temp = insert(temp, 5);
    temp = insert(temp , 6);
    temp = insert(temp, 8);
    transverse(temp);
    return 0;
}
