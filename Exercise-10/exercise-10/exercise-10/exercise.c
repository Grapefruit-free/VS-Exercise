//整数分解
#include <stdio.h>

int main() {

	int x, t, mark;
	printf("请输入一个整数：");
	scanf_s("%d", &x);

	mark = 1;
	t = x;

	while (t > 9) {
		t /= 10;
		mark *= 10;
	}

	do {
		int y = x / mark;
		printf("%d", y);
		if (mark > 9) {
			printf(" ");
		}
		x %= mark;
		mark /= 10;
	} while (mark > 0);
	
	return 0;
}