#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    struct Contact c[10];
    int n, i;
    printf("Enter number of contacts: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("\nEnter Contact %d details\n", i + 1);

        printf("Name: ");
        scanf("%s", c[i].name);

        printf("Phone Number: ");
        scanf("%s", c[i].phone);

        printf("Email: ");
        scanf("%s", c[i].email);
    }
    printf("\n----- Contact List -----\n"); 
    for(i = 0; i < n; i++) {
        printf("\nName  : %s", c[i].name);
        printf("\nPhone : %s", c[i].phone);
        printf("\nEmail : %s\n", c[i].email);
    }
    return 0;
}