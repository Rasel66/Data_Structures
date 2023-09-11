#include<stdio.h>
struct Student
{
    int id;
    float cgpa;
    char name[50];
};

int main()
{
    struct Student s;
    printf("Enter student id: ");
    scanf("%d", &s.id);
    
    printf("Enter student cgpa: ");
    scanf("%f", &s.cgpa);

    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Name: %s\n Id: %d\n CGPA: %f\n", s.name, s.id, s.cgpa);
}
