//��������
#include <stdio.h>
int main() {

	int x,y;
	int ret = 0;
	int digit;

	printf("������һ������");
	scanf_s("%d", &x);
	y = x;

	printf("�������򲻺��㣺");//�������򲻺���
	while (x) {
		digit = x % 10;
		ret = ret * 10 + digit;
		x /= 10;
	}
	printf("%d\n", ret);

	printf("���������㣺");//����������
	while (y) {
		digit = y % 10;
		printf("%d",digit);
		y /= 10;
	}

	return 0;
}