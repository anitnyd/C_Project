/*문제
어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다. 등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다. N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오. 

입력
첫째 줄에 1,000보다 작거나 같은 자연수 N이 주어진다.

출력
첫째 줄에 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력한다.*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_hansu(int n)		//함수의 입력값 n이 한수인지 체크하는 함수 check_hansu
{
	int ary[4] = { -1,-1,-1,-1 };	//초기값 -1로 세팅.

	// 배열 a: 일의 자리 | 십의 자리 | 백의 자리 | 천의 자리
	for (int i = 0; n > 0; i++)
	{
		ary[i] = n % 10;
		n /= 10;
	}

	int res;		// 참 거짓을 나타내는 값, 리턴값.

	if (ary[1] == -1 || ary[2] == -1)	// n이 한 자리수 또는 두 자리 수인 경우
	{
		res = 1;		// 항상 한수
	}
	else if (ary[3] == -1)		// 100 <= n <=999 인 경우
	{
		res = ((ary[1] - ary[0]) == (ary[2] - ary[1]) ? 1 : 0);		// 등차중항을 이용한 한수 판별
	}
	else           // 1000인 경우
	{
		res = 0;		// 항상 한수가 아님
	}
	return res;
}



int main(void)		// 메인 함수에서 한수를 판별하여 개수를 측정하는 프로그램 작성
{
	int num = '\0', cnt = 0;
	scanf("%d", &num);
	
	for (int i = 1; i <= num; i++)
		if (check_hansu(i) == 1)
			cnt++;
	
	printf("%d", cnt);

	return 0;
}