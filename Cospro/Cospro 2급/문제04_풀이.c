#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int arr[], int arr_len, int N, int M) {
	int min_sum = 50000;
	int max_sum = 0;
	// 6 - 3 + 1 = 4번을 반복
	// 6 - 2 + 1 = 5번을 반복
	for (int i = 0; i < N - M + 1; i++) {
		int temp_max = 0;
		for (int j = i; j < i + M; j++) {
			temp_max += arr[j];
		}
		if (temp_max > max_sum ) {
			max_sum = temp_max;
		}
		if (temp_max < min_sum ) {
			min_sum = temp_max;
		}
	}

	return max_sum - min_sum;
}

int main() {

	int arr1[] = { 3,1,1,4,5,9 };
	int arr1_len = 6; // 배열의 길이
	int N1 = 6; // 크기
	int M1 = 3; // 몇개 선택할건지
	int ret1 = solution(arr1, arr1_len, N1, M1);
	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("solution 함수의 반환 값은 %d입니다.\n", ret1);

	int arr2[] = { 3,1,1,4,5,9 };
	int arr2_len = 6;
	int N2 = 6;
	int M2 = 2;
	int ret2 = solution(arr2, arr2_len, N2, M2);
	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("solution 함수의 반환 값은 %d입니다.\n", ret2);

	int arr3[] = { 1,2,3,4,5,6 };
	int arr3_len = 6;
	int N3 = 6;
	int M3 = 4;
	int ret3 = solution(arr3, arr3_len, N3, M3);
	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("solution 함수의 반환 값은 %d입니다.\n", ret3);

}
