#include <stdio.h>

int main()
{
    int number, temp;
    int firstDigit, lastDigit, middlePart;
    int power = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;

    // Find the last digit
    lastDigit = number % 10;

    // Find the first digit and power of 10
    while (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }

    // First digit
    firstDigit = temp;

    // Middle part
    middlePart = (number % power) / 10;

    // Swap first and last digits
    number = lastDigit * power + middlePart * 10 + firstDigit;

    printf("Number after swapping = %d", number);

    return 0;
}
