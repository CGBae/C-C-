#include <stdio.h>

int main() {
	int sum = 0;

	for (int i = 1; i <= 100; i++) {
		sum = sum + i;
	}

	printf("1부터 100까지의 합계:%d", sum);
}