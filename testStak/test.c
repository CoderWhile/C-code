#define _CRT_SECURE_NO_WARNINGS 1
//洛谷P1044
//卡特兰数
#include<stdio.h>
//深度搜+记忆化

long long a[20];
//递归
int n;
int t = 0;

int f[20];
int h(int i)
{
	if (f[i]!=0)
		return f[i];
	int sum = 0;
		if (i < 2)
			return 1;
		for (int j = 1; j <= i; j++)
		{
			sum += h(j - 1)*h(i - j);
		}
		f[i] = sum;
		return sum;

}

int main()
{
	scanf("%d", &n);
	printf("%d", h(n));
}

long long a[20];
int n;

int main()
{
	scanf("%d", &n);
	int sum = 0;
	a[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		a[i] = a[i - 1] * (4 * i - 2) / (i + 1);
	}

	printf("%d", a[n]);

}