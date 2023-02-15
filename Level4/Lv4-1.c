/*문제
총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램을 작성하시오.

입력
첫째 줄에 정수의 개수 N(1 ≤ N ≤ 100)이 주어진다. 둘째 줄에는 정수가 공백으로 구분되어져있다. 셋째 줄에는 찾으려고 하는 정수 v가 주어진다. 입력으로 주어지는 정수와 v는 -100보다 크거나 같으며, 100보다 작거나 같다.

출력
첫째 줄에 입력으로 주어진 N개의 정수 중에 v가 몇 개인지 출력한다.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int n='\0',i;		//정수의 개수
	int ary[101] = { '\0' };
	int cnt=0;
	scanf("%d", &n);		//정수의 개수 입력
	for (i = 0; i < n; i++)
		scanf("%d", &ary[i]);
	int v='\0';		//찾으려는 정수 v
	scanf("%d", &v);
	for (i = 0; i < n; i++)
		if (ary[i] == v)
			cnt += 1;
	printf("%d", cnt);

	return 0;
}