//ʱ������
#include<stdio.h>

int main() {

	int heure1, seconde1;
	int heure2, seconde2;


	printf_s("��������Ҫ����ʱ�����ʼ����ֹʱ��㣺\n");

	scanf_s("%d %d", &heure1, &seconde1);
	scanf_s("%d %d", &heure2, &seconde2);


	int diffierence_h = heure2 - heure1;
	int diffierence_s = seconde2 - seconde1;

	if (diffierence_s < 0) {
		diffierence_s += 60;
		diffierence_h--;
	}

	printf_s("ʱ����%dСʱ%d����", diffierence_h, diffierence_s);

	return 0;
}