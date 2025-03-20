//输出1到100所有奇数

#include<stdio.h>

int main()
{
	int a = 0;
	while (a <= 100)
	{
		if (!0 == a % 2)
			printf("%d\n", a);
		a++;
	}
	return 0;
}