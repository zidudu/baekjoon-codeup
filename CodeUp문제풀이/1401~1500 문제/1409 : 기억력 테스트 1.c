#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main() {
	int a[10];
	int k;
	int i = 0;
	//숫자 10개 입력
	for (i = 0;i < 10;i++)
		scanf("%d", &a[i]);

	//둘째 줄에 k 값 입력
	scanf("%d", &k);

	// k 값을 찾아내기
	for (i = 0;i < 10;i++) {
		if (i+1 == k) {
			printf("%d", a[i]);
			break;
		}
	}
	if (i == 10) printf("0");
	




}
