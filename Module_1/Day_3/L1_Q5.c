#include <stdio.h>

int Largest(int n);

int main() {
    int n;
    
    printf("Enter a 4-digit number: ");
    scanf("%d", &n);
    
    int res = Largest(n);
    
    printf("Largest number by deleting a single digit: %d\n", res);
    
    return 0;
}

int Largest(int n) {
    int maxNumber = 0;
    
    
    int d1 = n/ 1000;
    int d2 = (n/ 100) % 10;
    int d3 = (n/ 10) % 10;
    int d4 = n% 10;
    
    // Finding the largest number after deleting a digit
    int n1 = d2 * 100 + d3 * 10 + d4;
    int n2 = d1 * 100 + dt3 * 10 + d4;
    int n3 = d1 * 100 + d2 * 10 + d4;
    int n4 = d1 * 100 + d2 * 10 + d3;
    
    // Comparing the numbers to find the largest
    if (n1 > maxNumber)
        maxNumber = n1;
    if (n2 > maxNumber)
        maxNumber = n2;
    if (n3 > maxNumber)
        maxNumber = n3;
    if (n4 > maxNumber)
        maxNumber = n4;
    
    return maxNumber;
}





