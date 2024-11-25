#include <stdio.h>

int main() {
    int choice;
    float num1, num2;

    printf("Nhap 2 so bat ky:\n");
    scanf("%f %f", &num1, &num2);

    do {
        printf("\n--- CALCULATOR ---\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        if (choice == 1) printf("Tong: %.2f\n", num1 + num2);
        else if (choice == 2) printf("Hieu: %.2f\n", num1 - num2);
        else if (choice == 3) printf("Tich: %.2f\n", num1 * num2);
        else if (choice == 4) {
            if (num2 != 0) printf("Thuong: %.2f\n", num1 / num2);
            else printf("Loi: Khong the chia cho 0.\n");
        }
        else if (choice == 5) printf("Thoat chuong trinh.\n");
        else printf("Lua chon khong hop le. Vui long chon lai.\n");
    } while (choice != 5);

    return 0;
}

