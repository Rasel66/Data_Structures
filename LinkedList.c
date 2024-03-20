#include<stdio.h>
#include<stdlib.h>

//Create Nodes
struct Node 
{
    int data;
    struct Node *next;
};

//print linked list values
void printLinkedList(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }
}

int main()
{
    //Initialize Nodes
    struct Node *head;
    struct Node *one = NULL;
    struct Node *two = NULL;
    struct Node *three = NULL;

    //Allocate memory
    one = malloc(sizeof(struct Node));
    two = malloc(sizeof(struct Node)); 
    three = malloc(sizeof(struct Node));

    //value assign
    one->data = 1;
    two->data = 2;
    three->data = 3;

    //connect node
    one->next = two;
    two->next = three;
    three->next = NULL;

    //print nodes values
    head = one;
    printLinkedList(head);
}