#include <stdio.h>

/*
	��дһ��������ÿ��һ�����ʵ���ʽ��ӡ�����롣 

*/ 

#define IN 1
#define OUT 0


main()
{
	int c, state;
	
	state = OUT;
	while ((c= getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (state == IN) {
				state = OUT;
				printf("\n");
			}
			
		}
		else if (state == OUT) {
			state = IN;
			putchar(c);
		} else
			putchar(c);
		
	}
}
