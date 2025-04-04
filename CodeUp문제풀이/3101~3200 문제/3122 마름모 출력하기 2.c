#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main() {
	int num;
	int i, j;

	scanf("%d", &num);

	//위쪽 행
	for (i = 1;i < num + 1;i++) {
		//왼쪽 공백
		for (j = 0;j < num - i;j++) printf(" ");
		// * 채우기
		for (j = 0;j < (i * 2) - 1;j++) printf("*");
		printf("\n");
	}
	//밑쪽 행
	for (i = num - 1;i > 0;i--) {
		//왼쪽 공백
		for (j = 0;j < num - i;j++) printf(" ");
		// * 채우기
		for (j = 0;j < i*2 -1;j++) printf("*");
		printf("\n");
	}



}
