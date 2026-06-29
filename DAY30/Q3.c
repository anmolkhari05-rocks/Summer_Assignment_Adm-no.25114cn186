#include <stdio.h>

int main() {
    int choice, n = 0, id[50];
    char name[50][50];
    float salary[50];
    do {
        printf("\n--- EMPLOYEE MANAGEMENT SYSTEM ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &id[n]);

                printf("Enter Employee Name: ");
                scanf("%s", name[n]);

                printf("Enter Salary: ");
                scanf("%f", &salary[n]);

                n++;
                printf("Employee added successfully!\n");
                break;

            case 2:
                printf("\nID\tName\tSalary\n");
                for(int i = 0; i < n; i++) {
                    printf("%d\t%s\t%.2f\n", id[i], name[i], salary[i]);
                }
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 3);
    return 0;
}