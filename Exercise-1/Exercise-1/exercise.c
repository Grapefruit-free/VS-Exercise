//时间差计算
#include<stdio.h>

int main() {

	int heure1, seconde1;
	int heure2, seconde2;


	printf_s("请输入你要计算时差的起始和终止时间点：\n");

	scanf_s("%d %d", &heure1, &seconde1);
	scanf_s("%d %d", &heure2, &seconde2);


	int diffierence_h = heure2 - heure1;
	int diffierence_s = seconde2 - seconde1;

	if (diffierence_s < 0) {
		diffierence_s += 60;
		diffierence_h--;
	}

	printf_s("时差是%d小时%d分钟", diffierence_h, diffierence_s);

	return 0;
}