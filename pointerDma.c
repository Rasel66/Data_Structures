#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    //ptr = (int *) malloc(5 * sizeof(int));
    ptr = (int *)calloc(5, sizeof(int));

    if(ptr == NULL){
        printf("Memory allocation failure\n");
    }
    else{
        printf("Memory allocation success\n");

        free(ptr);
        printf("Memory free success\n");

        ptr = (int *)realloc(ptr, 50);
        printf("Memory reallocation success\n");
    }
    return 0;
}