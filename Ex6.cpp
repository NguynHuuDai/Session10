#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);
    int arr[n], viTri[100], dem = 0;
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            viTri[dem++] = i;
        }
    }
    if (dem > 0) {
        for (int i = 0; i < dem; i++) {
            printf("%d ", viTri[i]);
        }
        printf("\n");
    } else {
        printf("Khong tim thay\n");
    }
    return 0;
}

