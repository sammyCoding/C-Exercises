#include <stdio.h>
/*
	1.8 ��дһ��ͳ�ƿո��Ʊ���뻻�з������ĳ��� 
*/ 

main()
{
	int c, nb, nt, nl;
	nb = 0; /*�ո����*/
	nt = 0;	/*�Ʊ������*/
	nl = 0;	/*���и���*/
	
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
