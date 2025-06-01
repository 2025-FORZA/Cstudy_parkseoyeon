//14467 소가 길을 건너간 이유1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int cow[11];  
    for (int i = 0; i < 11; i++) {
        cow[i] = -1;  
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        int cow_num, pos;
        scanf("%d %d", &cow_num, &pos);

        if (cow[cow_num] == -1) {
            cow[cow_num] = pos; 
        }
        else {
            if (cow[cow_num] != pos) {
                count++; 
                cow[cow_num] = pos; 
            }
        }
    }

    printf("%d\n", count);
    return 0;
}