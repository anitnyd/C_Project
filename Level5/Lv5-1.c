/*문제
정수 n개가 주어졌을 때, n개의 합을 구하는 함수를 작성하시오.
	C, C11, C (Clang), C11 (Clang): long long sum(int *a, int n);
	a: 합을 구해야 하는 정수 n개가 저장되어 있는 배열 (0 ≤ a[i] ≤ 1,000,000, 1 ≤ n ≤ 3,000,000)
	n: 합을 구해야 하는 정수의 개수
	리턴값: a에 포함되어 있는 정수 n개의 합
*/

//함수 작성 문제

long long sum(int* a, int n)		//배열 a가 가르키는 곳이 int형, n이 int형
{
	long long ans = 0;

	for (int i = 0; i < n; i++)
	{
		ans += a[i];
	}
	return ans;
}
