/*문제
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

입력
입력은 여러 개의 테스트 케이스로 이루어져 있다.

각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)

출력
각 테스트 케이스마다 A+B를 출력한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = '\0', b = '\0';
	while (scanf("%d %d", &a, &b) != EOF)		// Ctrl + Z 누르고 Enter 눌렀을 때 EOF로 함수 결과값 반환
	{
		printf("%d\n", a + b);		// 앞에서 이미 스캔한 꼴!
	}

	return 0;
}