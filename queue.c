#include <stdio.h>
#include <stdbool.h>
#define CAPACITY 5

int queue[CAPACITY];
int front = 0, rear = -1, totalItem = 0;

bool isFull (){
    if(totalItem == CAPACITY){
        return true;
    }
    return false;
}

bool isEmpty(){
    if(totalItem == 0){
        return true;
    }
    return false;
}

void printQueue(){
    int i;
    printf("Queue: ");
    for(i = 0; i < CAPACITY; i++){
        printf("%d ", queue[i]);
    }
    printf("\n");
}

void enqueue(int item){
    if(isFull()){
        printf("The queue is full.\n");
        return;
    }
    rear = (rear + 1) % CAPACITY;
    queue[rear] = item;
    totalItem++;
}

int deque(){
    if(isEmpty()){
        printf("The queue is empty.\n");
        return 0;
    }
    int frontItem = queue[front];
    queue[front] = 0;
    front = (front + 1) % CAPACITY;
    totalItem--;

    return frontItem;
}
void main(){
    printf("Implementation of enqueue.\n");
    enqueue(10);
    enqueue(11);
    enqueue(12);
    enqueue(13);
    enqueue(14);
    printQueue();
    enqueue(15);
    printf("Dequeue: %d\n", deque());
    printQueue();
    enqueue(15);
    printQueue();
}
