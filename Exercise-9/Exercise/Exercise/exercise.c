//���ǰX�����е������������ǰx������
#include <stdio.h>

void exporter_1();
void exporter_2();
void mode();

int main() {

	int x;
	mode();
	scanf_s("%d", &x);

	if (x == 1)
		exporter_1();

	else if (x == 2)
		exporter_2();

	else
		printf("����ģʽ����");

	return 0;
}

void exporter_1() {

	int x,i;
	printf("�����룺");
	scanf_s("%d",&x);

	for (i = 1; i <= x; i++) {

		int j;
		int judge = 1;

		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				judge = 0;
				break;
			}
		}
		if (judge == 1) {
			printf("%d ", i);
		}
	}

}

void exporter_2() {

	int x;
	int i = 0, n = 1;
	printf("�����룺");
	scanf_s("%d", &x);

	while (i < x) {
		int j;
		int judge = 1;
		for (j = 2; j < n; j++) {
			if (n % j == 0) {
				judge = 0;
				break;
			}
		}
		if (judge == 1) {
			i++;
			printf("%d\t", n);
			if (i % 5 == 0) {
				printf("\n");
			}
		}
		n++;
	}


}

void mode() {

	printf("ѡ��ģʽ��\n");
	printf("ģʽ1������ǰx�����е�������\n");
	printf("ģʽ2�����ǰx��������\n");
	printf("������1����2��ѡ��ģʽ��\n");

}