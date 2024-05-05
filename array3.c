#include <stdio.h>

void main() {
	int aa[3][4];
	int i, k;

	int val = 1;

	for (i = 0; i < 3; i++) {
		for (k = 0; k < 4; k++) {
			aa[i][k] = val;
			val++;
			printf("%d", aa[i][k]);
		}
		printf("\n");
	}
}