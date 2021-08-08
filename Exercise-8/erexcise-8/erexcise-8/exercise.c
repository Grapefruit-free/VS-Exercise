//判断是否是素数
#include <stdio.h>

int main() {

	int x,i;
	int judge = 1;
	printf("判断输入的数字是是否是素数,请输入：");
	scanf_s("%d", &x);

	for (i = 2; i < x; i++) {
		if (x % i == 0) {
			judge = 0;
			break;
		}
	}
	if (judge == 1) {
		printf("%d是素数!",x);
	}
	else {
		printf("%d不是素数!",x);
	}

	return 0;
}