#include <stdio.h>

int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int bcnn(int a, int b) {
    return (a * b) / ucln(a, b);
}

int main() {
    int a, b;

    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("Loi! Vui long nhap hai so nguyen duong.\n");
        return 1; 
    }

    printf("BCNN cua %d va %d la: %d\n", a, b, bcnn(a, b));

    return 0;
}

