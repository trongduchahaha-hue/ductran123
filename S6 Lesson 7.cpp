#include <stdio.h>

int main() {
    int number1, number2, temp;

    scanf("%d", &number1);
    scanf("%d", &number2);

    while (number2 != 0) {
        temp = number1 % number2;
        number1 = number2;
        number2 = temp;
    }

    printf("result: %d\n", number1);

    return 0;
}


