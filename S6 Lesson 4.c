#include <stdio.h>

int main() {
    int n;

    do {
        printf("Nhap mot so nguyen tu 1 den 10: ");
        scanf("%d", &n);

        if (n < 1 || n > 10) {
            printf("Loi! Vui long nhap lai (1 - 10).\n");
        }

    } while (n < 1 || n > 10);

    printf("\nBang cuu chuong %d:\n", n);
    int i;
    for ( i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

