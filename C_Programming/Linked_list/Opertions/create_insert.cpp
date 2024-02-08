#include<iostream>
using namespace std;
typedef struct Node
{
    int data;
    struct Node *next;
}Node;
struct Node* insert_mode(int position , int value)
{
    Node *first, *p;
    int count = 0;
    if(position == 0)
    {
        p = (Node*)malloc(sizeof(Node));
        p->data = value;
        p->next = NULL;
        first = p;
        count++;
    }
    else if(position <= count + 1)
    {
        for(int i = 0; i < position - 1; i++)
        {
            p->data = value;
            p = p->next;
            
        }
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
    return ;
}
int main()
{
    int position, data_1;
    Node* temp = insert_mode(position, data_1);
    transverse(temp);
    return 0;
}