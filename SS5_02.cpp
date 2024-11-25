#include <stdio.h>

int main() {
    int target = 6;
    int nhap;

    printf("Hay nhap mot so cho den khi trung voi so cho truoc.\n");

    do {
        printf("Nhap so: ");
        scanf("%d", &nhap);
        if (nhap != target) {
            printf("Sai, thu lai!\n");
        }
    } while (nhap != target);

    printf("Chuc mung, ban da nhap dung!\n");
    return 0;
}

