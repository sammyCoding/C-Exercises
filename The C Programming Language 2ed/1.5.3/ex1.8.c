#include <stdio.h>
/*
	1.8 编写一个统计空格、制表符与换行符个数的程序 
*/ 

main()
{
	int c, nb, nt, nl;
	nb = 0; /*空格个数*/
	nt = 0;	/*制表符个数*/
	nl = 0;	/*换行个数*/
	
	while((c = getchar()) != EOF) {
		if (c == ' ')
			++nb;
		if (c == '\t')
			++nt;
		if (c == '\n')
			++nl;
	}
	printf("%d	%d	%d\n", nb, nt, nl);
}
