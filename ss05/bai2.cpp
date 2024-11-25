#include <stdio.h>

int main() {
    
    do {
    int so_cho_truoc ; 
	printf("so cho truoc:");
	scanf("%d",&so_cho_truoc);
	int so_nhap;
	printf("so nhap:");
	scanf("%d",&so_nhap);
//        printf("Nhap so: ");
//        scanf("%d", &so_nhap);
    } while (so_nhap != so_cho_truoc);

    printf("ket thuc");
}

