#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	int i;
	char aa[7], bb[7];

	puts("���ڿ��� �Է��ϼ��� : ");
	gets(aa);

	for (i = 0; i < 6; i++) {
		bb[i] = aa[5-i];
	}
	bb[6] = '\0';

	printf("������ �Ųٷ� ��� ==> %s", bb);
}