#include <stdio.h>
/*
	1.6 ��֤���ʽgetchar() != EOF��ֵ��0����1  
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
