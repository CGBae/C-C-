#include <stdio.h>

int main() {
	for (int i = 0; i < 10; i++) {
		for (int k = 9; k > i; k--) {
			printf(" ");
		}
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n");

	int star = 1;
	for (int n = 0; n < 5; n++) {
		for (int l = 9; l > n; l--) {
			printf(" ");
		}
		for (int m = 0; m < star; m++) {
			printf("*");
		}
		star = star + 2;
		printf("\n");

	}
	printf("\n");

	int first, second;
	printf("두 수를 입력하세요 : ");
	scanf_s("%d %d", &first, &second);
	printf("실행 결과 1 :\n");
	printf("시작값 ==> %d\n", first);
	printf("끝값 ==> %d\n", second);
	while (first <= second) {
		while (first % 2 == 1) {
			printf("%d ", first);
			first++;
		}
		first++;
	}
	printf("\n\n");

	int num1, num2, num3, num4;
	int m=0, n=0, x=0, y=0;
	printf("실행 결과 1 :\n");
	printf("숫자를 여러 개 입력 : ");
	scanf_s("%d%d%d%d", &num1, &num2, &num3, &num4);
	while (m < num1*2) {
		printf("\u2665");
		m++;
	}
	printf("\n");
	while (n < num2 * 2) {
		printf("\u2665");
		n++;
	}
	printf("\n");
	while (x < num3 * 2) {
		printf("\u2665");
		x++;
	}
	printf("\n");
	while (y < num4 * 2) {
		printf("\u2665");
		y++;
	}

	return 0;
}