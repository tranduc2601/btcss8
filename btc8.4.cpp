#include <stdio.h>
int main() {
    int arr[3][4] = {
        {1, 3, 5, 7},
        {9, 11, 13, 15},
        {17, 19, 21, 23}
    };
    int max = arr[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    printf(" so lon nhat co trong mang la: %d\n", max);
    return 0;
}

