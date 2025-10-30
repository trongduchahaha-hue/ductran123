#include <stdio.h>
#include <math.h>

int main() {
    int n;

    printf("Nhap mot so nguyen bat ky: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("-%d\n", -n);
        n = -n;
    }

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int temp = n;
    int count = 0;
    while (temp > 0) {
        temp /= 10;
        count++;
    }

    printf("Cac chu so la: ");
    int i;
    for ( i = count - 1; i >= 0; i--) {
        int divisor = pow(10, i);
        int digit = n / divisor;
        printf("%d ", digit);
        n %= divisor;
    }

    printf("\n");
    return 0;
}

