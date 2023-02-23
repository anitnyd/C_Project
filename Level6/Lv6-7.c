﻿// 크로아티아 알파벳

/*문제
예전에는 운영체제에서 크로아티아 알파벳을 입력할 수가 없었다. 따라서, 다음과 같이 크로아티아 알파벳을 변경해서 입력했다.

크로아티아 알파벳	변경
č	c=
ć	c-
dž	dz=
đ	d-
lj	lj
nj	nj
š	s=
ž	z=
예를 들어, ljes=njak은 크로아티아 알파벳 6개(lj, e, š, nj, a, k)로 이루어져 있다. 단어가 주어졌을 때, 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.

dž는 무조건 하나의 알파벳으로 쓰이고, d와 ž가 분리된 것으로 보지 않는다. lj와 nj도 마찬가지이다. 위 목록에 없는 알파벳은 한 글자씩 센다.

입력
첫째 줄에 최대 100글자의 단어가 주어진다. 알파벳 소문자와 '-', '='로만 이루어져 있다.

단어는 크로아티아 알파벳으로 이루어져 있다. 문제 설명의 표에 나와있는 알파벳은 변경된 형태로 입력된다.

출력
입력으로 주어진 단어가 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char your_word[101] = { '\0'};
	scanf("%s", &your_word);
	int len = 0, dz_cnt = 0, last_dz_cnt = 0;
	len = strlen(your_word);		// 글자 수 (c=의 경우, 2개로 취급)

	int alp_cnt = len;
	for (int i = 0; i < len; i++) {
		if (your_word[i] == 'c') {
			if (your_word[i + 1] == '=' || your_word[i + 1] == '-') alp_cnt -= 1;
		}
		else if (your_word[i] == 'd') {
			if (your_word[i + 1] == 'z' && your_word[i + 2] == '=') {
				alp_cnt -= 2;
				dz_cnt++;
			}
			else if (your_word[i + 1] == '-') alp_cnt -= 1;
		}
		else if (your_word[i] == 'l' || your_word[i] == 'n') {
			if (your_word[i + 1] == 'j') alp_cnt -= 1;
		}
		else if (your_word[i] == 's' && your_word[i + 1] == '=')
			alp_cnt -= 1;
		else if (your_word[i] == 'z' && your_word[i + 1] == '=') {
			if (dz_cnt==last_dz_cnt) alp_cnt -= 1;		//등호성립조건: dz=가 아닌 경우
			last_dz_cnt = dz_cnt;		//dz_cnt의 마지막 기록 남기기
		}	
	}

	printf("%d", alp_cnt);


	return 0;
}
