#include<stdio.h>

int main() {

	char M;
	int score;
	printf("������ɼ���");
	scanf_s("%d",&score);

	score /= 10;

	switch (score) {
	case 10:
	case 9:
		M = 'A';
		break;
	case 8:
		M = 'B';
		break;
	case 7:
		M = 'C';
		break;
	case 6:
		M = 'D';
		break;
	default:
		M = 'F';
	}
	printf("���ĳɼ���%c", M);
	return 0;
}