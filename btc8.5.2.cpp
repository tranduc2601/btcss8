#include <stdio.h>
int main() {
    int rows, cols;
    printf(" nhap so hang cua ma tran: ");
    scanf("%d", &rows);
    printf(" nhap so cot cua ma tran: ");
    scanf("%d", &cols);
    if (rows <= 0 || cols <= 0) {
        printf(" so hang va so cot phai la so nguyen duong\n");
        return 1;
    }
    int matrix[rows][cols];
    int sum = 0;
    printf(" nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                sum += matrix[i][j];
            }
        }
    }
    printf(" tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);
    return 0;
}

