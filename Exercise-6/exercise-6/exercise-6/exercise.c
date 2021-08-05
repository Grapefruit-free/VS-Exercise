//计算平均数
#include <stdio.h>
int main() {
	int sum = 0;
	int count = 0;
	int number;

	/*一种实现方法但是并不是最优解
	do {
		printf("请输入一个数字：\n");
		scanf_s("%d", &number);
		if (number != -1) {
			sum += number;
			count++;
		}
	} while (number != -1);
	*/
	printf("请输入一个数字：\n");
	scanf_s("%d", &number);

	while (number != -1) {
		sum += number;
		count++;
		printf("请输入一个数字：\n");
		scanf_s("%d", &number);
	}

	printf("您输入的数的平均值是：%lf",(double)sum/count);
	return 0;
}