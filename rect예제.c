#include <stdio.h>

int main() {
	for (int i = 0; i < 10; i++) {
		for (int k = 9; k > i; k--) {
			printf(" ");
		}
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n");

	int str = 1;
	for (int n = 0; n < 5; n++) {
		for (int l = 9; l > n; l--) {
			printf(" ");
		}
		for (int m = 0; m < str; m++) {
			printf("*");
			str = str + 2;
		}
		printf("\n");

	}
	return 0;
}

//�й�_�̸�_C.c ������ ������ �� ���� ������
//�ǽ� 4�� �ѹ��� ���