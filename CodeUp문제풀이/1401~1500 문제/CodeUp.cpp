#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main() {
	int a[10];
	int k;
	int i = 0;
	//���� 10�� �Է�
	for (i = 0;i < 10;i++)
		scanf("%d", &a[i]);

	//��° �ٿ� k �� �Է�
	scanf("%d", &k);

	// k ���� ã�Ƴ���
	for (i = 0;i < 10;i++) {
		if (i+1 == k) {
			printf("%d", a[i]);
			break;
		}
	}
	if (i == 10) printf("0");
	




}
