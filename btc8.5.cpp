#include <stdio.h>

int main() {
    int hang = 3, cot = 3;
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int sum = 0;
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            if (i == 0 || i == hang - 1 || j == 0 || j == cot - 1) {
                sum += matrix[i][j];
            }
        }
    }
    printf(" tong cac so duong bien cua ma tran la: %d\n", sum);
    return 0;
}
// em lam o tren xong thay code thua ne em fix code o duoi  
//	int main() {
//    int matrix[3][3] = {
//        {1, 2, 3},
//        {4, 5, 6},
//        {7, 8, 9}
//    };
//    int sum = 0;
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            if (i == 0 || i == 3 - 1 || j == 0 || j == 3 - 1) {
//                sum += matrix[i][j];
//            }
//        }
//    }
//    printf(" tong cac so duong bien cua ma tran la: %d\n", sum);
//    return 0;
//}
