#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[40];
	char ori, new;
	int i;

	printf("���� ���ڸ� �Է� : ");
	gets(str);

	printf("���� ���ڿ� ���ο� ���� : ");
	scanf("%c %c", &ori, &new);

	printf("��ȯ�� ��� ==> ");
	for (i = 0; i < 40; i++) {
		if (str[i] == ori) {
			str[i] = new;
		}
	}
	printf("%s", str);
}