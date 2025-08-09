//#11727 2*n ≈∏¿œ∏µ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int arr[1000];

    arr[1] = 1; 
    arr[2] = 3; 

    for (int i = 3; i <= n; i++) {
        arr[i] = (arr[i - 1] + 2 * arr[i - 2]) % 10007;
    }

    printf("%d", arr[n]);
    return 0;
}
