#include <stdio.h>
int main() {
    int n;
    printf(" nhap vao kih thuoc ma tran cua mang hinh vuong: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf(" nhap cac phan tu cho mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf(" ma tran vua nhap la: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// nhuc cai dau thiet  
