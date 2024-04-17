#include <stdio.h>
#include <stdlib.h>
struct Node *createLinkedList(int arr[], int size);
struct Node{
    int data;
    struct Node *next;
};

struct Node *createLinkedList(int arr[], int size){
    struct Node *head = NULL, *temp = NULL, *current = NULL;
    int i;
    for(i=0; i<size; i++){
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = arr[i];
        temp->next = NULL;
        if(head == NULL){
            head = temp;
        }
        else{
            current->next = temp;
        }
        current = temp;
    }
    return head;
}

int main(){
    int a[] = {5, 6, 7};
    struct Node *head = createLinkedList(a, 3);
    while (head != NULL)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
    printf("NULL\n");
    
}