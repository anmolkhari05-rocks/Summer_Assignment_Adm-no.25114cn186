#include <stdio.h>

int main() {
    int tickets, available = 50;
    char name[50];
    printf("Enter Passenger Name: ");
    scanf("%s", name);
    printf("Available Tickets: %d\n", available);
    printf("Enter number of tickets to book: ");
    scanf("%d", &tickets);
    if(tickets <= available) {
        available -= tickets;

        printf("\n----- Ticket Booking Successful -----\n");
        printf("Passenger Name : %s\n", name);
        printf("Tickets Booked : %d\n", tickets);
        printf("Remaining Tickets : %d\n", available);
    } else {
        printf("Sorry, only %d tickets are available.\n", available);
    }
    return 0;
}