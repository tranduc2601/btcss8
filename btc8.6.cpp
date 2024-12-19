#include <stdio.h>
int main() {
    int n;
    printf(" nhap kich thuoc cua ma tran hinh vuong: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf(" vu tru nao dem den hinh vuong am vay? \n");
        return 1;
    }
    int matrix[n][n];
    int sum = 0;
    printf(" nhap cac phan tu cua ma tran: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf(" cac phan tu tren duong cheo chinh cua ma tran: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
        sum += matrix[i][i];
    }
    printf("\n");
    printf(" tong cac phan tu tren duong cheo chinh la: %d\n", sum);
    return 0;
}

