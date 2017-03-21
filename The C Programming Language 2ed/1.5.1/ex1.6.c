#include <stdio.h>
/*
	1.6 验证表达式getchar() != EOF的值是0还是1  
*/

main() 
{
	int c;
	c = getchar();
	while (c != EOF) {
		printf("%d\n",(c != EOF)); 
		putchar(c);
		c = getchar();
	}
}
