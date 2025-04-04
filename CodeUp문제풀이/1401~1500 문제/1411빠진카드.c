#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main() {
	int a[50] = {0};
	int ex[50] = {0};
	int N;
	// N  숫자 입력
	scanf("%d", &N);


	// 숫자들 입력
	for (int i = 1;i <= N;i++) {
		scanf("%d", &a[i]);
		//printf("입력된 a[%d] 의 값 : %d\n", i,a[i]);
	}

	
	//숫자들을 다른 배열에 넣고 그 값들을 정렬
	for (int i = 1;i <= N;i++) {
		// i가 0이면 a[i] = 9, a[a[i]] = a[9]이다. 그리고 그 값에 a[9] =9;를 넣는다.
		// i가 9이면 a[i] =1 이고, a[[a[i]]= a[1] = a[1] = 1
		ex[a[i]] = a[i]; // a[9]는 9가 들어감. // 아 그 값들이 바뀌니 문제구만
		//printf("i 값 : %d , a[i] 의 값 : %d \n", i, a[i]);
	
	}
	////임시: a 배열 값들 출력
	//for (int i = 1;i <= N;i++) {
	//	printf("[바뀐 ex 배열 값 출력]\n");
	//	printf("i = %d일때 ex[%d] = %d\n", i, i, ex[i]);
	//}
	//그 숫자들중 없는 번호를 세기
	for (int i = 1;i <= N;i++) {
		// 1~10까지 세는데 ex 값에서 i 와 값이 다르면 출력
		if (i != ex[i]) { printf("%d", i); break; }

	}







}
