#include <stdio.h>

int main() {
	/*int a = 0;
	int b = 1;

	printf("a�� ���� %d �Դϴ�. \n", a);
	printf("b�� ���� %d �Դϴ�. \n", b);

	a = a + 10;
	b = b + 10;

	printf("����� a�� ���� %d �Դϴ�. \n", a);
	printf("����� b�� ���� %d �Դϴ�. \n", b);*/

	int a;
	int b;

	a = 3;
	b = a + 5;

	printf("a�� ��: %d \n", a);
	printf("b�� ��: %d \n", b);

	printf("����a�� �ּ�: %x \n", &a);
	printf("����b�� �ּ�: %x \n", &b);

	return 0;
}