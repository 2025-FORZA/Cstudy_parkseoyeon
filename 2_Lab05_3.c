#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int T,c;
	int quarter=0, dime=0, nickel=0, penny=0;
	scanf("%d", &T);

	for (int i = 0;i < T;i++) {
		scanf("%d",&c);
		quarter = c / 25;
		dime = (c - (quarter * 25)) / 10;
		nickel = (c - (quarter * 25) - (dime * 10)) / 5;
		penny = (c - (quarter * 25) - (dime * 10) - (nickel * 5));
		printf("%d %d %d %d\n", quarter, dime, nickel, penny);
	}

	
	return 0;
}