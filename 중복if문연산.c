#include <stdio.h>

int main() {
	int num1, num2; 
	double result = 0;
	char ch, etr;

	printf("ù ��° ���� �Է��ϼ��� : ");
	scanf_s("%d", &num1);
	scanf_s("%c", &etr); //ù ��° ���� �Է¹ް� enter�� ġ�� ������ �Է¹ޱ⸦ �ǳʶپ �ӽ÷� �߰��س���

	printf("����� �����ڸ� �Է��ϼ��� : ");
	scanf_s("%c", &ch);

	printf("�� ��° ���� �Է��ϼ��� : ");
	scanf_s("%d", &num2);

	if (ch == '+')
		result = num1 + num2;

	else if (ch == '-')
		result = num1 - num2;

	else if (ch == '*')
		result = num1 * num2;

	else if (ch == '/') {
		if (num2 == 0) {
			printf("0���� ���� �� �����ϴ�.");
			return 1;
		}
		result = num1 / num2;
	}

	else if (ch == '%')
		result = num1 % num2;

	else {
		printf("�����ڸ� �߸� �Է��߽��ϴ�.");
		return 0;
	}
	printf("%d %c %d = %.6f �Դϴ�.", num1, ch, num2, result);

	return 0;
}