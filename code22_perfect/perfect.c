#include<stdio.h>

int main()
{
	int a, b, c = 0, i;//a:范围，b：判断是否为完数的1~999，c:判断b是否为完数的值，i：计算c需要累加而新建的变量
	scanf("%d", &a);
	for (b = 1; b < a; b += 1)
	{
		c = 0;//防止c带回上次计算的值
		for (i = 1; i < b; i++)//计算c
			if (b % i == 0)
				c = c + i;
		if(c == b)//对比计算值来判断是否输出
			printf("%d\n", c);
	}
	return 0;
}