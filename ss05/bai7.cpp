#include <stdio.h>

int tim_UCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int so1, so2;

    do {
        printf("Nhap so nguyen duong thu nhat: ");
        scanf("%d", &so1);
        if (so1 <= 0) {
            printf("So nhap phai là so nguyên duong\n");
        }
    } while (so1 <= 0);

    do {
        printf("Nhap so nguyên duong thu hai: ");
        scanf("%d", &so2);
        if (so2 <= 0) {
            printf("So nhap phai là so nguyên duong\n");
        }
    } while (so2 <= 0);

    int ucln = tim_UCLN(so1, so2);

    printf("Uoc chung lon nhat cua %d và %d là: %d\n", so1, so2, ucln);

    return 0;
}

