#include <stdio.h>

int main() {
    int n, roll[50], marks[50];
    char name[50][50];
    printf("Enter number of students: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }
    printf("\n--- Student Records ---\n");
    printf("Roll No\tName\tMarks\n");
    for(int i = 0; i < n; i++) {
        printf("%d\t%s\t%d\n", roll[i], name[i], marks[i]);
    }
    return 0;
}