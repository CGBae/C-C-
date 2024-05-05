#include <stdio.h>

void main() {
	int aa[100], bb[100];
	int i;

	for (i = 0; i <= 99; i++) {
		aa[i] = i * 2;
		printf("aa[%d] ==> %d \n", i, aa[i]);
	}
	for (i = 0; i <= 99; i++) {
		bb[i] = aa[99 - i];
		printf("bb[%d] ==> %d \n", i, bb[i]);
	}
}