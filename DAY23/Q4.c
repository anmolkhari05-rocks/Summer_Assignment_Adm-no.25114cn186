#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0};
    char maxChar;
    int max = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n')
            count[(unsigned char)str[i]]++;
    }
    for (int i = 0; i < 256; i++) {
        if (count[i] > max) {
            max = count[i];
            maxChar = i;
        }
    }
    printf("Maximum occurring character: %c\n", maxChar);
    printf("Frequency: %d\n", max);
    return 0;
}