#include <stdio.h>

void palindrome() {
    int num, reversed_num = 0, remainder, original_num;

    // Prompt the user to enter an integer
    printf("\nEnter an integer: ");
    scanf("%d", &num);

    original_num = num; // Store the original number for comparison

    // Reverse the number
    while (num != 0) {
        remainder = num % 10; // Get the last digit
        reversed_num = reversed_num * 10 + remainder; // Build the reversed number
        num /= 10; // Remove the last digit from the original number
    }

    // Check if the original number is equal to the reversed number
    if (original_num == reversed_num) {
        printf("%d is a palindrome number.\n", original_num);
    } else {
        printf("%d is not a palindrome number.\n", original_num);
    }

 //   return 0;
}
