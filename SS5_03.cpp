#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So nhap khong hop le. Vui long nhap so nguyen duong.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        sum =sum+i;
    }

    printf("Tong cac so tu 1 den %d la: %d\n", n, sum);
    return 0;
}

