//����ƽ����
#include <stdio.h>
int main() {
	int sum = 0;
	int count = 0;
	int number;

	/*һ��ʵ�ַ������ǲ��������Ž�
	do {
		printf("������һ�����֣�\n");
		scanf_s("%d", &number);
		if (number != -1) {
			sum += number;
			count++;
		}
	} while (number != -1);
	*/
	printf("������һ�����֣�\n");
	scanf_s("%d", &number);

	while (number != -1) {
		sum += number;
		count++;
		printf("������һ�����֣�\n");
		scanf_s("%d", &number);
	}

	printf("�����������ƽ��ֵ�ǣ�%lf",(double)sum/count);
	return 0;
}