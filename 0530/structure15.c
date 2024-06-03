#include <stdio.h>
struct point {
	int x;
	int y;
};

int main() {
	struct point p1 = { 20, 30 };
	printf("구조체 변수 p1의 주소: %x \n", &p1);
	printf("멤버 변수 p1.x의 주소: %x \n", &p1.x);
	printf("멤버 변수 p1.y의 주소: %x \n", &p1.y);

	return 0;
}