#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	int i;
	char aa[7], bb[7];

	puts("문자열을 입력하세요 : ");
	gets(aa);

	for (i = 0; i < 6; i++) {
		bb[i] = aa[5-i];
	}
	bb[6] = '\0';

	printf("내용을 거꾸로 출력 ==> %s", bb);
}