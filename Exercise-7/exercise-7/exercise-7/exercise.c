//整数逆序
#include <stdio.h>
int main() {

	int x,y;
	int ret = 0;
	int digit;

	printf("请输入一个数：");
	scanf_s("%d", &x);
	y = x;

	printf("返回逆序不含零：");//返回逆序不含零
	while (x) {
		digit = x % 10;
		ret = ret * 10 + digit;
		x /= 10;
	}
	printf("%d\n", ret);

	printf("返回逆序含零：");//返回逆序含零
	while (y) {
		digit = y % 10;
		printf("%d",digit);
		y /= 10;
	}

	return 0;
}