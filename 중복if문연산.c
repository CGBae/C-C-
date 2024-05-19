#include <stdio.h>

int main() {
	int num1, num2; 
	double result = 0;
	char ch, etr;

	printf("첫 번째 수를 입력하세요 : ");
	scanf_s("%d", &num1);
	scanf_s("%c", &etr); //첫 번째 수를 입력받고 enter를 치면 연산자 입력받기를 건너뛰어서 임시로 추가해놓음

	printf("계산할 연산자를 입력하세요 : ");
	scanf_s("%c", &ch);

	printf("두 번째 수를 입력하세요 : ");
	scanf_s("%d", &num2);

	if (ch == '+')
		result = num1 + num2;

	else if (ch == '-')
		result = num1 - num2;

	else if (ch == '*')
		result = num1 * num2;

	else if (ch == '/') {
		if (num2 == 0) {
			printf("0으로 나눌 수 없습니다.");
			return 1;
		}
		result = num1 / num2;
	}

	else if (ch == '%')
		result = num1 % num2;

	else {
		printf("연산자를 잘못 입력했습니다.");
		return 0;
	}
	printf("%d %c %d = %.6f 입니다.", num1, ch, num2, result);

	return 0;
}