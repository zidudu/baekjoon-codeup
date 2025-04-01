#include <stdio.h>
#include <stdlib.h>
/*
그림과 같이 인덱스가 있는 N * N 크기의 격자에 파란색과 빨간색을 칠하려고 합니다
 M개의 영역에 대해 왼쪽 위와 오른쪽 아래 모서리 인덱스, 칠할 색상이 주어질 때, 
 색칠이 끝난 후 원하는 색상의 칸 수를 구하는 solution 함수를 제작하려 합니다.

 영역은 직사각형 모양으로 색칠하고, 다른 색이 겹치는 부분은 회색으로 색칠합니다.
 같은 색의 영역이 겹치는 경우는 회색으로 칠하지 않습니다.
 회색으로 색칠한 칸에는 다른 색을 칠할 수 없습니다.
그러므로, 사용할 수 있는 색의 종류는 총 3가지(빨간색 = 1, 파란색 = 2, 회색 = 3)입니다.
예를 들어 2개의 색칠 영역을 갖는 위 그림에서 빨간색 영역은 12칸, 회색 영역은 8칸, 파란색 영역
은 12칸이 됩니다.
주어진 코드에서 잘못된 한 줄을 고쳐 solution 함수가 올바른 answer를 return할 수 있도록 해주세
요.

매개변수는 격자의 크기 N, 영역의 개수 M, 각 영역의 정보가 들어있는 area 배열, 원하는 색 번호 C
가 주어집니다.
각 영역의 정보는 영역의 왼쪽 위 점의 좌표, 영역의 오른쪽 아래 점의 좌표, 칠할 색의 종류가 주어
집니다. 아래 그림을 참고하세요.
*/
const int RED = 1;
const int BLUE = 2;
const int GRAY = 3;

int solution(int N, int M, int** area, int area_row_len, int area_col_len, int C) {
	//회색 영역의 칸 수를 저장할 변수
	int answer = 0;

	//10 * 10 크기의 종이를 만듬. 즉 이차원 배열을 만들어 10 * 10 크기의 배열을 만듬
	int** paper = (int**)malloc(sizeof(int*) * N);
	for (int i = 0; i < N; i++) {
		paper[i] = (int*)malloc(sizeof(int) * N);
	}
	// 0으로 초기화
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			paper[i][j] = 0;
		}
	}

	// M=2. 즉 2개의 영역을 칠함
	for (int i = 0; i < M; i++) {
		// 첫번째 영역, 즉 빨간색 영역의 정보를 target에 저장함
		int* target = area[i];

		//시작 좌표
		int from_r = target[0];
		int from_c = target[1];
		//끝 좌표
		int to_r = target[2];
		int to_c = target[3];
		//색깔
		int color = target[4];

		for (int r = from_r; r <= to_r; r++) {
			for (int c = from_c; c <= to_c; c++) {
				if (paper[r][c] == 0) {
					paper[r][c] = color;
				}
				else if (paper[r][c] != color) { 
					//else if (paper[r][c] == color)를 else if (paper[r][c] != color) 로 수정
					paper[r][c] = GRAY;
				}
			}
		}
	}
	//원하는 색의 칸 수를 구함
	for (int r = 0; r < N; r++) {
		for (int c = 0; c < N; c++) {
			if (C == paper[r][c]) {
				answer += 1;
			}
		}
	}

	return answer;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다. 아래에는 잘못된 부분이 없으니 위의 코드만 수정하세요.

int main() {
	int N1 = 10; // 격자의 크기
	int M1 = 2; // 영역의 개수
	int area1_row_len = 2; // 행	의 길이
	int area1_col_len = 5; // 열의 길이

	// 행과 열의 길이를 가진 2차원 배열을 동적할당
	int** area1 = (int**)malloc(sizeof(int*) * area1_row_len);
	for (int i = 0; i < area1_row_len; i++)
		area1[i] = (int*)malloc(sizeof(int) * area1_col_len);

	// 2차원 배열에 각각의 5개의 값을 넣음
	//  0         1           2            3            4
	// 왼쪽 위r, 왼쪽 위c, 오른쪽 아래r, 오른쪽 아래c, 칠할 색의 종류
	area1[0][0] = 1;
	area1[0][1] = 1;
	area1[0][2] = 5;
	area1[0][3] = 4;
	area1[0][4] = 1;

	area1[1][0] = 2;
	area1[1][1] = 3;
	area1[1][2] = 6;
	area1[1][3] = 6;
	area1[1][4] = 2;

	//원하는 색 번호. 3이니 회색
	int C1 = 3;

	/// 매개변수 : 격자의 크기 N, 영역의 개수 M, 각 영역의 정보가 들어있는 area 배열, 원하는 색 번호 C
	int ret1 = solution(N1, M1, area1, area1_row_len, area1_col_len, C1);
	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("solution 함수의 반환 값은 %d입니다.\n", ret1);

	int N2 = 10;
	int M2 = 2;
	int area2_row_len = 2;
	int area2_col_len = 5;
	int** area2 = (int**)malloc(sizeof(int*) * area2_row_len);
	for (int i = 0; i < area2_row_len; i++)
		area2[i] = (int*)malloc(sizeof(int) * area2_col_len);

	area2[0][0] = 1;
	area2[0][1] = 1;
	area2[0][2] = 5;
	area2[0][3] = 4;
	area2[0][4] = 1;
	area2[1][0] = 2;
	area2[1][1] = 3;
	area2[1][2] = 6;
	area2[1][3] = 6;
	area2[1][4] = 1;
	int C2 = 3;
	int ret2 = solution(N2, M2, area2, area2_row_len, area2_col_len, C2);
	// [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
	printf("solution 함수의 반환 값은 %d입니다.\n", ret2);

}
