/*
字符串检索KMP算法
*/




#include<iostream>
using namespace std;


//计算next数组


void g_Next(char* p, int n, int* next)
{
	next[0] = -1;
	int k = -1;
	int j = 0;
	while (j<n-1)
	{
		if (k == -1 || p[j] == p[k])
			next[++j] = ++k;
		else k = next[k];
	}
	return;
}

int KMP(char* s, char *p, int N, int n, int* next)
{
	int i(0), j(0), ans = -1;

	while (i<N)
	{
		if (j == -1 || s[i] == p[j])
		{
			++i;
			++j;
		}
		else
			j = next[j];
		if (j == n)
		{
			ans = i - n;
			break;
		}
	}
	return ans;
}

int  main()
{
	char s[12] = "qwdqwwdqwqw", p[4] = "qww";
	int N = 12, n0 = 3;
	int next[3] = { 0 };
	g_Next(p, n0, next);
	int a=KMP(s, p, N, n0, next);
	cout << a;

}