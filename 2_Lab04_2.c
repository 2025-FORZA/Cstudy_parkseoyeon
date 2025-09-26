#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;
	int w,l;
	int total = 0;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &w);
		scanf("%d", &l);
		//scanf("%d %d",&w,&l);
		if (w == 136) {
			total = total + 1000;
		}
		else if (w == 142) {
			total = total + 5000;
			//total += 5000
		}
		else if (w == 148) {
			total = total + 10000;
		}
		else if (w == 154) {
			total = total + 50000;
		}
	}
	printf("%d", total);
	return 0;
}