#include <stdio.h>

/*
	ͳ��������������汾1 
*/

main() 
{
	long nc;
	nc = 0;
	while (getchar() != EOF) {
		++nc;
		printf("%ld\n", nc);
	}
}
