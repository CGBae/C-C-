#include <stdio.h>

void main() {
	int hap = 0;
	int i;

	for (i = 500; i <= 1000; i + 2) {
		hap = hap + i;
	}

	printf("500에서 1000까지의 홀수의 합: %d \n", hap);
}