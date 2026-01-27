#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1; // Using 'unsigned long long' to handle larger results

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Error handling for negative numbers
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.");
    } else {
        // Iterative logic to calculate factorial
        for (i = 1; i <= n; ++i) {
            fact *= i; // Multiplies current value of 'fact' by the loop counter 'i'
        }
        
        // Output the final result
        printf("Factorial of %d = %llu", n, fact);
    }

    return 0;
}

/*  Output Example:
  Enter an integer: 5
  Factorial of 5 = 120
 */
