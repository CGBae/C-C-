#include <stdio.h>

struct group {
	int a;
	double b;
};

int main() {
	struct group g1;

	scanf_s("%d %lf", &g1.a, &g1.b);

	printf("g1.a의 값: %d \n", g1.a);
	printf("g1.b의 값: %lf \n", g1.b);
	return 0;
}