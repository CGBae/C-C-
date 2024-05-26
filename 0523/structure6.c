#include <stdio.h>

struct point {
	int x;
	int y;
};

int main() {
	struct point p1 = { 10, 20 };
	struct point p2 = { 0, 0 };

	p2 + p1;
	p2 - p1;
	return 0;
}