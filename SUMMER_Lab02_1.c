//#10250 ACM хёез
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int T, H, W, N;
	scanf("%d", &T);

	for (int i = 0;i < T;i++) {
		scanf("%d %d %d", &H, &W, &N);

		int arr[100][100];

		for (int j = 1; j <= H;j++) {

			for (int i = 1;i <= W;i++) {
				arr[j][i] = j * 100 + i;

			}
		}

		int floor, room;
		if (N % H == 0) {
			floor = H;
			room = N / H;
		}
		else {
			floor = N % H;
			room = N / H + 1;
		}
		printf("%d\n", arr[floor][room]);
	
	}

	return 0;

}