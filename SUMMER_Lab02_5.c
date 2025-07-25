//#5622 ´ÙÀÌ¾ó
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int turn(char x);
int main() {
	char str[100];
	scanf("%s", str);
	int total = 0;

	int len = strlen(str);

	for (int i = 0; i < len;i++) {

		total=total+turn(str[i]);
	}

    printf("%d", total);

	return 0;
}

int turn(char x) {
    if (x == 'A' || x == 'B' || x == 'C') {
        return 3;
    }
    else if (x == 'D' || x == 'E' || x == 'F') {
        return 4;
    }
    else if (x == 'G' || x == 'H' || x == 'I') {
        return 5;
    }
    else if (x == 'J' || x == 'K' || x == 'L') {
        return 6;
    }
    else if (x == 'M' || x == 'N' || x == 'O') {
        return 7;
    }
    else if (x == 'P' || x == 'Q' || x == 'R' || x == 'S') {
        return 8;
    }
    else if (x == 'T' || x == 'U' || x == 'V') {
        return 9;
    }
    else if (x == 'W' || x == 'X' || x == 'Y' || x == 'Z') {
        return 10;
    }
    return 0;
}