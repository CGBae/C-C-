#include <stdio.h>
struct point {
	int x;
	int y;
};

struct point* function();

int main() {
	struct point* p;
	p = function();
	printf("%d %d \n", p->x, p->y);
	printf("%d %d \n", (*p).x, (*p).y);
	return 0;
}

struct point* function() {
	static struct point call = {10, 20};
	return &call;
}