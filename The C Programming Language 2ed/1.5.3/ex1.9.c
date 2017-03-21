#include <stdio.h>

/*
	编写一个将输入复制到输入的程序，并将其中连续的多个空格用一个空格代替 
	思路：两个变量，一个记录当前字符，一个记录前一个字符。如果输入的不是空格，则直接输出；
	如果当前输入的一个字符是空格，
	并且前一个字符也是空格，则只输出一个空格。 
*/

#define NONBLANK 'a'

main()
{
	int c, lastc;
	
	lastc = NONBLANK;
	while ((c = getchar()) != EOF) {
		if (c != ' ')
			putchar(c);
		if (c == ' ')
			if (lastc != ' ')	/*检查当前的空格字符是一个单个的字符还是一串空格中的第一个*/
				putchar(c);
		
		lastc = c;
	} 
	
}

