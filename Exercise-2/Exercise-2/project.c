#include<stdio.h>

int main() {
	 
	int price = 0;
	int bill = 0;

	printf("�������");
	scanf_s("%d",&price);

	printf("������Ʊ�棺");
	scanf_s("%d",&bill);

	if (bill >= price) {
		printf("Ӧ��������%d\n",bill - price);
	}
	else {
		printf("���Ǯ����");
	}

	return 0;
}