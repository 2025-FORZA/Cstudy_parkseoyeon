#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    long long X, S;
    scanf("%lld %lld", &X, &S);

    int possible = 0;

    for (int i = 0; i < N; i++) {
        long long c, p;
        scanf("%lld %lld", &c, &p);

        if (c <= X && p > S) {
            possible = 1;
        }
    }

    if (possible)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
