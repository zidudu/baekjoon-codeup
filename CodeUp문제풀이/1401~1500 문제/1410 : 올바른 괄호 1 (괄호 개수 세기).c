#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void main() {
	char a[100001];
	int k;
	int i = 0;
	int a_count = 0;
	int b_count = 0;
	//숫자 10개 입력
	/*for (i = 0;i < 100;i++)*/

	// sizeof(a)로 문자 값 100000자만 받겠다는 의미
	//  scanf로 쓸땐 scanf("%100000s"a); 로 써야함
	// scanf("%s"a); 로 쓰면 100000자 이상을 받게 되서 스택 오버플로우가 발생
	fgets(a, sizeof(a), stdin);

	//가로들을 셈.
	for (int i = 0;a[i] != '\0';i++) {
		if (a[i] == '(') a_count++;
		else if (a[i] == ')') b_count++;
	}
	// 개수 출력
	printf("%d %d", a_count, b_count);








}
