#include <stdio.h>

typedef struct _student {
	double math;
	double english;
	double total;
} student;

int main() {
	student stu = { 90, 80, 0 };

	stu.total = (stu.math + stu.english) / 2;
	printf("average: %lf \n", stu.total);
	return 0;
}