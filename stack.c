#include <stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;

void push(int x){
    if(top < CAPACITY - 1){
        top = top + 1;
        stack[top] = x;
        printf("Inserted value is: %d\n", x);
    }else{
        printf("Stack does not have enough space");
    }
}

int pop(){
    if(top >= 0){
        int value = stack[top];
        top = top - 1;
        return value;
        printf("Poped value is: %d\n", value);
    }else{
        printf("Stack is empty\n");
        return -1;
    }
}

int peek(){
    if(top >= 0){
        return stack[top];
    }
    else{
        printf("Stack is empty\n");
        return -1;
    }
}

int main(){
    printf("Implementation of stack\n");
    printf("Top value is: %d\n", peek());
    push(10);
    push(13);
    push(14);
    printf("Top value is: %d\n", peek());
    pop();
    push(15);
    printf("Top value is: %d\n", peek());
}