/*문제
"45분 일찍 알람 설정하기"
현재 상근이가 설정한 알람 시각이 주어졌을 때, 창영이의 방법을 사용한다면, 이를 언제로 고쳐야 하는지 구하는 프로그램을 작성하시오.

입력
첫째 줄에 두 정수 H와 M이 주어진다. (0 ≤ H ≤ 23, 0 ≤ M ≤ 59) 그리고 이것은 현재 상근이가 설정한 놓은 알람 시간 H시 M분을 의미한다.

입력 시간은 24시간 표현을 사용한다. 24시간 표현에서 하루의 시작은 0:0(자정)이고, 끝은 23:59(다음날 자정 1분 전)이다. 시간을 나타낼 때, 불필요한 0은 사용하지 않는다.

출력
첫째 줄에 상근이가 창영이의 방법을 사용할 때, 설정해야 하는 알람 시간을 출력한다. (입력과 같은 형태로 출력하면 된다.)*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int h = '\0', m = '\0';
	scanf("%d%d", &h, &m);
	while (((0<=h&&h<=23)&&(0<=m&&m<=59))==0)
		scanf("%d%d", &h, &m);
	
	if (m >= 45)
		printf("%d %d", h, m -45);
	else if (h==0)
		printf("23 %d", m + 15);
	else
		printf("%d %d", h - 1, m + 15);

	return 0;
}