#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[40];
	char ori, new;
	int i;

	printf("여러 글자를 입력 : ");
	gets(str);

	printf("기존 문자와 새로운 문자 : ");
	scanf("%c %c", &ori, &new);

	printf("변환된 결과 ==> ");
	for (i = 0; i < 40; i++) {
		if (str[i] == ori) {
			str[i] = new;
		}
	}
	printf("%s", str);
}