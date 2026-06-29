#include <stdio.h>
int roll[50], marks[50], n = 0;
char name[50][50];
void addStudent() {
    printf("Enter Roll No: ");
    scanf("%d", &roll[n]);

    printf("Enter Name: ");
    scanf("%s", name[n]);

    printf("Enter Marks: ");
    scanf("%d", &marks[n]);

    n++;
    printf("Student added successfully!\n");
}
void displayStudents() {
    printf("\nRoll No\tName\tMarks\n");

    for(int i = 0; i < n; i++) {
        printf("%d\t%s\t%d\n", roll[i], name[i], marks[i]);
    }
}
void searchStudent() {
    int r, found = 0;

    printf("Enter Roll No to search: ");
    scanf("%d", &r);

    for(int i = 0; i < n; i++) {
        if(roll[i] == r) {
            printf("Student Found!\n");
            printf("Roll No: %d\n", roll[i]);
            printf("Name: %s\n", name[i]);
            printf("Marks: %d\n", marks[i]);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Student not found!\n");
    }
}
int main() {
    int choice;
    do {
        printf("\n--- STUDENT MINI PROJECT ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);
    return 0;
}