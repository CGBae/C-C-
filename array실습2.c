#include <stdio.h>

void main() {
	int res[9][9];
	int i, k;

	for (i = 0; i < 9; i++) {
		for (k = 0; k < 9; k++) {
			res[i][k] = (i + 1) * (k + 1);

			printf("%dX%d= %d\t", k+1, i+1, res[i][k]);
		}
		printf("\n");
	}
}