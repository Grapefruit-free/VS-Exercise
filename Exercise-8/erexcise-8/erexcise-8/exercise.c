//�ж��Ƿ�������
#include <stdio.h>

int main() {

	int x,i;
	int judge = 1;
	printf("�ж�������������Ƿ�������,�����룺");
	scanf_s("%d", &x);

	for (i = 2; i < x; i++) {
		if (x % i == 0) {
			judge = 0;
			break;
		}
	}
	if (judge == 1) {
		printf("%d������!",x);
	}
	else {
		printf("%d��������!",x);
	}

	return 0;
}