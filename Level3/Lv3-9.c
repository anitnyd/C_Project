/*문제
첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.

입력
첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

출력
첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j, n = '\0';
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < n-i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}