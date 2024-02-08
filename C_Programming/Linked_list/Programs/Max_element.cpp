#include<iostream>
#include<climits>
// #include<algorithm>
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
int max_element(struct Node* p)
{
    int max_number = INT_MIN;
    while(p != 0)
    {
        // max_number = max(max_number, p->data);
        if(max_number < p->data)
        {
            max_number = p->data;
        }
        p = p->next;
    }
    return max_number;
}
void free_memory(struct Node* p)
{
    while(p != NULL)
    {
        struct Node* temp = p;
        p = p->next;
        free(temp);
    }
}
int main()
{
    create(5);
    cout << "The max element is "<< max_element(first);
    free(first);
    return 0;
}