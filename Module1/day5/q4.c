#include <stdio.h>
#include <stdlib.h>

typedef struct Student {
    char name[50];
    int rollNumber;
    float marks;
} student;
 
int main() {
    int n, i;
    student * s;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    s = (student *)malloc(n * sizeof(student));
    
    printf("Enter details for Students\n");
    for (i = 0; i < n; i++) {
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll Number: ");
        scanf("%d", &(s[i].rollNumber));
        printf("Marks: ");
        scanf("%f", &(s[i].marks));
    }

    printf("\n The student details are:\n");
    for (i = 0; i < n; i++) {
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].rollNumber);
        printf("Marks: %.2f\n", s[i].marks);
    }

    free(s);

    return 0;
}