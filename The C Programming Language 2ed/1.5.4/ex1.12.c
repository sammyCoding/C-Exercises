#include <stdio.h>

/*
	编写一个程序，以每行一个单词的形式打印其输入。 

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
