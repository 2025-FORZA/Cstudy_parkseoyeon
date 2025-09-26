#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*int repunit(int n) {
    int rep = 0;
    for (int i = 0; i < n; i++) {
        rep = rep * 10 + 1;
    }
    return rep;
}*/
int repunit(int n) {
	int result=0;
	for (int i = 0;i < n;i++) {
		int m = 1;

		for (int j = 0;j < i;j++) {
			m =m * 10;
		}
		result = result + m;
	}
	return result;
}

int main() {
	int x, y, repunit_x, repunit_y,result;
	scanf("%d", &x);
	scanf("%d", &y);
	repunit_x = repunit(x);
	repunit_y = repunit(y);
    result = repunit_x + repunit_y;
	printf("%d", result);
	return 0;
}

