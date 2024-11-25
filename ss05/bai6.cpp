#include <stdio.h>
int main() {
    int a, b, choice, sum, signal, accumulation, quotient, remainder;
    
    printf("Nhap vao 2 so nguyen: ");
    scanf("%d %d", &a, &b);
    
    do{
        printf("\nMENU\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. So du trong phep chia 2 so\n");
        printf("6. Uoc chung lon nhat\n");
        printf("7. Boi chung nho nhat\n");
        printf("8. Thoat\n");
        
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        
        switch(choice){
            case 1:
                sum = a + b;
                printf("Tong 2 so la: %d\n", sum);
                break;
            case 2:
                signal = a - b;
                printf("Hieu 2 so la: %d\n", signal);
                break;
            case 3:
                accumulation = a * b;
                printf("Tich 2 so la: %d\n", accumulation);
                break;
            case 4:
                quotient = a / b;
                printf("Thuong 2 so la: %d\n", quotient);
                break;
            case 5:
                remainder = a % b;
                printf("So du trong phep chia 2 so la: %d\n", remainder);
                break;
            
            case 8:
                return 0;
            default:
            printf("Vui long chon tu 1-8\n");
        }
    } while ("Vui long cho tu 1 - 8\n");
}
