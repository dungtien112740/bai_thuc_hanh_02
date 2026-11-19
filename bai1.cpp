#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    
    int *ma = (int *)malloc(n * sizeof(int));
    if (ma == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }
    //nhap dl
    for (int i = 0; i < n; i++) {
        scanf("%d", &ma[i]);
    }

    //in ra
    printf("Mang %d phan tu vua tao:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d\t", ma[i]);
    }

    //giai phong ma tran
    free(ma);

    return 0;
}
