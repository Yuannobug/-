#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m = 0; int n = 0; int len = 0; int i = 0;
	int k = 0; int start = 0;
	printf("请输入猴子的总数m：\n");
	scanf("%d", &m);
	printf("请输入n的值：\n");
	scanf("%d", &n);
	len = m;
	int* p = (int*)malloc(m * sizeof(int));
	if (p == NULL)
	{
		printf("内存开辟失败\n");
		return 0;
	}
	for (i = 0; i < m; i++)
	{
		p[i] = i + 1;
	}
	while (len > 1)
	{
		k = (n - 1+start) % len;
		start = k ;
		for (i = k ; i < len-1; i++)
		{
			p[i] = p[i + 1];
		}
		len--;
	}
	printf("猴王的编号为%d", *p);
	free(p);
	p = NULL;
	return 0;
}