#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    do {
        printf("\n--- STRING MENU ---\n");
        printf("1. Length\n");
        printf("2. Reverse\n");
        printf("3. Uppercase\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Length = %lu\n", strlen(str));
                break;

            case 2: {
                char rev[100];
                strcpy(rev, str);
                strrev(rev);
                printf("Reverse = %s\n", rev);
                break;
            }

            case 3:
                for(int i = 0; str[i] != '\0'; i++) {
                    if(str[i] >= 'a' && str[i] <= 'z')
                        str[i] -= 32;
                }
                printf("Uppercase = %s\n", str);
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);
    return 0;
}