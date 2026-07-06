#include <stdio.h>

int main(void)
{
    int number, reversed = 0, remainder;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        return 1;
    }

    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    printf("Reversed number: %d\n", reversed);
    return 0;
}