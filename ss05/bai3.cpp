#include <stdio.h>

int main() {
    int n;      
    int tong = 0; 

    do {
        printf("Nhap mot so nguyen duong: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("So vua nhap không phai so nguyen duong\n");
        }
    } while (n <= 0); 

    for (int i = 1; i <= n; i++) {
        tong += i;
    }

    printf("Tong các so tu 1 den %d là: %d\n", n, tong);

    return 0;
}

