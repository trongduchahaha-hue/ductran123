#include <stdio.h>

int main() {
    int N;
    int tong = 0;

    printf("Nhap N = ");
    scanf("%d", &N);
    int i;
    for ( i = 1; i <= N; i++) {
        tong += i;
    }

    printf("Tong = %d\n", tong);

    return 0;
}

