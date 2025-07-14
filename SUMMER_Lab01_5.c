//#10814 나이순 정렬
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }
    int* ages = malloc(sizeof(*ages) * n);
    char (*names)[101] = malloc(sizeof * names * n);
    if (!ages || !names) {
        return 1;
    }


    for (int i = 0; i < n; i++) {
        scanf("%d %100s", &ages[i], names[i]);
    }

    for (int age = 1; age <= 200; age++) {
        for (int i = 0; i < n; i++) {
            if (ages[i] == age) {
                printf("%d %s\n", age, names[i]);
            }
        }
    }

    free(ages);
    free(names);
    return 0;
}