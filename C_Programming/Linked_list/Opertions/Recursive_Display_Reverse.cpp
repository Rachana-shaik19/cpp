#include<iostream>
using namespace std ;
struct Node 
{
    int data ;
    struct Node* next; 
};

struct Node* first;
void create(int array[], int length)
{
    struct Node * temp, *last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = array[0];
    first->next = NULL;
    last = first;
    for(int i = 1; i < length ; i++)
    {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = array[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}
void recursiveDisplay(struct Node* p)
{
    if(p != NULL)
    {
        printf("%d ", p->data);
        recursiveDisplay(p->next);
    }
}
void reverseDisplay(struct Node * p)
{
    if(p != NULL)
    {
        reverseDisplay(p->next);
        printf("%d ", p->data);
    }
}
int main()
{
    int array[] = {21, 43, 21, 63};
    create(array, 4);
    printf("using recursive the values are : ");
    recursiveDisplay(first);
    printf("\n");
    printf("Reverse order of list: ");
    reverseDisplay(first);
    printf("\n");
    return 0;
}