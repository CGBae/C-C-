#include <stdio.h>
struct point {
	int x;
	int y;
};

int main() {
	struct point p1 = { 20, 30 };
	printf("����ü ���� p1�� �ּ�: %x \n", &p1);
	printf("��� ���� p1.x�� �ּ�: %x \n", &p1.x);
	printf("��� ���� p1.y�� �ּ�: %x \n", &p1.y);

	return 0;
}