#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a,b,c: \n");
    scanf("%d %d %d", &a, &b, &c);

    int *p1, *p2, *p3;
    p1 = &a;
    p2 = &b;
    p3 = &c;

    if(*p1 >= *p3 && *p1 >= *p2){
        printf("Largest number is: %d\n", *p1);
    }
    if(*p2 >= *p3 && *p2 >= *p1){
        printf("Largest number is: %d\n", *p1);
    }
    else{
        printf("Largest number is: %d\n", *p3);
    }
}