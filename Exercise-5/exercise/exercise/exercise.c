//������Ϸ
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand((unsigned)time(0));
	int number = rand() % 100 + 1;
	int counter = 0;
	int x;

	printf("���Ѿ������һ��1-100��������������\n");

	do {
		printf("������һ������\n");
		scanf_s("%d",&x);
		counter++;
		if (x > number) {
			printf("����\n");
		}
		else if(x < number){
			printf("С��\n");
		}
	} while (x != number);
	printf("��ϲ��¶��ˣ���һ������%d��",counter);
	return 0;
}