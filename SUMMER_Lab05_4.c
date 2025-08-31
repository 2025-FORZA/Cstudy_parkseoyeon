//#1672 DNA ÇØµ¶
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char decode(char a, char b) {
    if (a == 'A') {
        if (b == 'A') return 'A';
        if (b == 'G') return 'C';
        if (b == 'C') return 'A';
        if (b == 'T') return 'G';
    }
    if (a == 'G') {
        if (b == 'A') return 'C';
        if (b == 'G') return 'G';
        if (b == 'C') return 'T';
        if (b == 'T') return 'A';
    }
    if (a == 'C') {
        if (b == 'A') return 'A';
        if (b == 'G') return 'T';
        if (b == 'C') return 'C';
        if (b == 'T') return 'G';
    }
    if (a == 'T') {
        if (b == 'A') return 'G';
        if (b == 'G') return 'A';
        if (b == 'C') return 'G';
        if (b == 'T') return 'T';
    }
    return 'A'; 
}

int main() {
    int N;
    scanf("%d", &N);
    char s[1000001];
    scanf("%s", s);

    char result = s[N - 1];  
    for (int i = N - 2; i >= 0; i--) {
        result = decode(s[i], result);
    }

    printf("%c\n", result);
    return 0;
}
