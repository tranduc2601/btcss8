#include <stdio.h>
int main() {
    int arr[] = {1,3,5,7,8,10,12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int value, found = 0;
    printf(" nhap so can tim: ");
    scanf("%d", &value);
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            printf(" vi tri cua so do la %d \n", i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf(" so khong ton tai trong mang \n");
    }
    return 0;
}

