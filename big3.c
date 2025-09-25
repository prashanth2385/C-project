#include <stdio.h>
void biggest() {
    int num1, num2, num3;

    // Prompt the user to enter three numbers
    printf("Enter three numbers: ");

    // Read the three numbers from the user
    scanf("%d %d %d", &num1, &num2, &num3);

    // Compare the numbers to find the largest
    if (num1 >= num2 && num1 >= num3) {
        printf("%d is the largest number.\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("%d is the largest number.\n", num2);
    } else {
        printf("%d is the largest number.\n", num3);
    }

    //return 0;
}
