#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main() {
	char a[100001];
	int k;
	int i = 0;
	int a_count = 0;
	int b_count = 0;
	//���� 10�� �Է�
	/*for (i = 0;i < 100;i++)*/

	// sizeof(a)�� ���� �� 100�ڸ� �ްڴٴ� �ǹ�
	//  scanf�� ���� scanf("%100s"a); �� �����
	// scanf("%s"a); �� ���� 100�� �̻��� �ް� �Ǽ� ���� �����÷ο찡 �߻�
	fgets(a, sizeof(a), stdin);

	//���ε��� ���� ���
	for (int i = 0;a[i] != '\0';i++) {
		if (a[i] == '(') a_count++;
		else if (a[i] == ')') b_count++;
	}
	// ���� ���
	printf("%d %d", a_count, b_count);








}
