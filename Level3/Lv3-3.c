/*문제
n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 n (1 ≤ n ≤ 10,000)이 주어진다.

출력
1부터 n까지 합을 출력한다.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = '\0', i, sum=0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("%d", sum);

	return 0;
}