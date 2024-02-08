#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
struct Node *first;
void create(int length)
{
    struct Node *temp ,*last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = 1;
    first->next = NULL;
    last = first;
    for(int i = 2; i < length; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = i;
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}
void adding_elements(int& sum, struct Node *p)
{
    while (p != NULL)
    {
        printf("The value is %d\n", p->data);
        sum += p->data;
        p = p->next;
    }
    return;
}
int main()
{
    create(5);
    int sum = 0;
    adding_elements(sum, first);
    printf("The sum is %d",sum);
    return 0;
}