#include <stdio.h>

int main() {
	int i = 10;
	int dan;

	scanf_s("%d", &dan);
	printf("¸î ´Ü? %d\n", dan);

	for (i = 1; i <= 10; i++) {
		printf("%d X %d = %d\n", dan, i, dan * i);
	}
}