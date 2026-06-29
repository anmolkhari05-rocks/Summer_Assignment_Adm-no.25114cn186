#include <stdio.h>

int main() {
    int choice, n = 0, id[50];
    char book[50][50], author[50][50];
    do {
        printf("\n--- MINI LIBRARY SYSTEM ---\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &id[n]);

                printf("Enter Book Name: ");
                scanf("%s", book[n]);

                printf("Enter Author Name: ");
                scanf("%s", author[n]);

                n++;
                printf("Book added successfully!\n");
                break;

            case 2:
                printf("\nID\tBook\tAuthor\n");
                for(int i = 0; i < n; i++) {
                    printf("%d\t%s\t%s\n", id[i], book[i], author[i]);
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