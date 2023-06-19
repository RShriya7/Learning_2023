#include <stdio.h>

void printPattern1(int n);
void printPattern2(int n);
void printPattern3(int n);

int main() {
    int n;

    // Accept input from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Print the pattern
    printPattern1(n);
    printPattern2(n);
    printPattern3(n);

    return 0;
}

// Function to print numbers from 1 to n
void printPattern1(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
    for (i = n - 1; i >= 1; i--) {
        printf("%d", i);
    }
    printf("\n");
}

// Function to print spaces in between
void printPattern2(int n) {
    int i, spaces = 2;
    for (i = 1; i <= n - 1; i++) {
        int j;
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (j = 1; j <= spaces; j++) {
            printf(" ");
        }
        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
        spaces += 2;
    }
}

// Function to print numbers from n to 1
void printPattern3(int n) {
    int i;
    for (i = n; i >= 1; i--) {
        printf("%d", i);
    }
    for (i = 2; i <= n; i++) {
        printf("%d", i);
    }
    printf("\n");
}







