#include <stdio.h>

int main() {
	int x;
	//int n = 1;
	int d = 0;

	scanf_s("%d",&x);

	//for (x > 0; x /= 10; n++);��һ�ַ�ʽʵ��

	do {
		x /= 10;
		d++;
	} while (x > 0);

	printf("%d",d);

	return 0;
}