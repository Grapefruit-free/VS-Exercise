//猜数游戏
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand((unsigned)time(0));
	int number = rand() % 100 + 1;
	int counter = 0;
	int x;

	printf("我已经想好了一个1-100的数字请你来猜\n");

	do {
		printf("请输入一个数字\n");
		scanf_s("%d",&x);
		counter++;
		if (x > number) {
			printf("大了\n");
		}
		else if(x < number){
			printf("小了\n");
		}
	} while (x != number);
	printf("恭喜你猜对了，你一共猜了%d次",counter);
	return 0;
}