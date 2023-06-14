#include <stdio.h>
float perc(float total){
    float percentage=(total/300)*100;
    return percentage;
}
int main() {
    int rollNo;
    char name[50];
    int physicsMarks, mathMarks, chemistryMarks;
    float total, percentage;

    printf("Enter Roll No: ");
    scanf("%d", &rollNo);
    printf("Enter Name: ");
    scanf(" %[^\n]", name);
    printf("Enter Marks in Physics: ");
    scanf("%d", &physicsMarks);
    printf("Enter Marks in Math: ");
    scanf("%d", &mathMarks);
    printf("Enter Marks in Chemistry: ");
    scanf("%d", &chemistryMarks);

    total = physicsMarks + mathMarks + chemistryMarks;
    percentage = perc(total);

    printf("Here is the student summary\n");
    printf("Name: %s\n", name);
    printf("Roll No: %d\n", rollNo);
    printf("Physics Marks: %d\n", physicsMarks);
    printf("Math Marks: %d\n", mathMarks);
    printf("Chemistry Marks: %d\n", chemistryMarks);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    return 0;
}