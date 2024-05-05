#include <stdio.h>

int main() {
	char ss[5] = "abcd";
	char tt[5];
	int i;

	for (i = 0; i <= 3; i++) {
		tt[i] = ss[3 - i];
	}
	//for (i = 4; i > 0; i--) {
	//	tt[4 - i] = ss[i-1];
	//}
	tt[4] = '\0';

	printf("거꾸로 출력한 결과==> %s \n", tt);
}