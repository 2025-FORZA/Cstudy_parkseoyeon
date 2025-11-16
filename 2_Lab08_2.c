#include <stdio.h>

int main() {
    long long A, B;

    while (1) {
        scanf("%lld %lld", &A, &B);
        if (A == 0 && B == 0) break;

        long long C = 2 * A - B;
        printf("%lld\n", C);
    }

    return 0;
}
