#include <stdio.h>

int main() {
	/*int a = 0;
	int b = 1;

	printf("a의 값은 %d 입니다. \n", a);
	printf("b의 값은 %d 입니다. \n", b);

	a = a + 10;
	b = b + 10;

	printf("변경된 a의 값은 %d 입니다. \n", a);
	printf("변경된 b의 값은 %d 입니다. \n", b);*/

	int a;
	int b;

	a = 3;
	b = a + 5;

	printf("a의 값: %d \n", a);
	printf("b의 값: %d \n", b);

	printf("변수a의 주소: %x \n", &a);
	printf("변수b의 주소: %x \n", &b);

	return 0;
}