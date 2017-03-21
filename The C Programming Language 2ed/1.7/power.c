#include <stdio.h>

/*
函数原型：
	也可以写成这样 int power(int, int);
	建议总是指明参数名，如下 
*/

int power(int m, int n);

main()
{
	int i;
	
	for (i = 0; i < 10; ++i)
		pintf("%d	%d	%d\n", i, power(2,i), power(-3,i));
	
	return 0;
	
}

/*
	函数定义的一般形式：
	返回值类型 函数名(0个或多个参数声明)
	{
		声明部分
		语句序列 
	} 

*/

int power(int base, int n) 
{
	int i, p;
	p = 1;
	for (i = 1; i <= n; ++i)
		p = p * base;
	return p;
}
