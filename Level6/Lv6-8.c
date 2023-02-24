//그룹 단어 체커
/*문제
그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다. 예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만, aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.

단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 단어의 개수 N이 들어온다. N은 100보다 작거나 같은 자연수이다. 둘째 줄부터 N개의 줄에 단어가 들어온다. 단어는 알파벳 소문자로만 되어있고 중복되지 않으며, 길이는 최대 100이다.

출력
첫째 줄에 그룹 단어의 개수를 출력한다.*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 0, cnt = 0, len, res, his_cnt;

	char history[101] = { '\0' };		//단어 하나에서 나오는 알파벳을 순서대로 저장(연속 동일 알파벳은 하나만)
	char word[101] = { '\0' };
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", &word);
		len = strlen(word);
		res = 1, his_cnt = 0;	// aaaaaaaaa처럼 같은 알파벳으로만 이루어진 글자를 위해 기본값 1로 설정

		for (int j = 0; j < len; j++) {

			if (word[j] != word[j + 1]) {

				for (int k = 0; k < j; k++) {
					if (his_cnt == 0) res *= 1;
					else if (word[j] == history[k]) res *= 0;	//이전에 저장했던 history 와 같은 값을 가지면 0
					else res *= 1;
				}
				history[j] = word[j];		//바뀌기 전 마지막 알파벳을 history에 저장
				his_cnt++;					//history에 저장되었는지 유무 확인
				if (res == 0) break;
			}
		}
		if (res == 1) cnt++;
	}

	printf("%d", cnt);


	return 0;
}