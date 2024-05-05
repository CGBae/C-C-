#include <stdio.h>
int main() {
	int num1 = 10;
	double* pnum1 = &num1;
	double num2 = 5;
	int* pnum2 = &num2;
	printf("ch : %d\n", *pnum2);
}