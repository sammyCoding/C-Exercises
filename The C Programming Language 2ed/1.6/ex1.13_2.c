#include <stdio.h>

/*
	编写一个程序 ，打印输入中单词长度的直方图。水平方向的直方图比较容易绘制，
	垂直方向的直方图则要困难些。 
	下面是垂直方向
*/

#define MAXHIST 15
#define MAXWORD	11
#define	IN 1
#define OUT 0 

main()
{
		int c, i, j, nc, state; 
	int len;	/*单词柱的长度*/
	int maxvalue;	/*数组wl的最大值*/
	int ovflow;		/*单词长度过长的数量*/
	int wl[MAXWORD];	/**/
	
	/*初始化值*/
	state = OUT;
	nc = 0;
	ovflow = 0;
	for (i = 0; i < MAXWORD; ++i)
		wl[i] = 0;
	
	/*统计各种长度的单词*/ 
	while((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			state = OUT;
			if (nc > 0) {
			
				if (nc > MAXWORD)
					++ovflow;
				else
					++wl[nc];
			}	
			nc = 0; 
		} else if (state == OUT) {
			state = IN;
			nc = 1;
		} else 
			++nc;	
	} 
	
	/*找出数量最多的*/
	maxvalue = 0;
	for (i = 1; i < MAXWORD; ++i)
		if (wl[i] > maxvalue)
			maxvalue = wl[i]; 
	
	/*打印星号*/
	for (i = MAXHIST; i > 0; --i) {
		for (j = 1; j < MAXWORD; ++j) {
			if (wl[j] * MAXHIST / maxvalue >= i) 
				printf("   *");
			else 
				printf("    ");
		}
		putchar('\n');
	}
	
	for (i = 1; i < MAXWORD; ++i) 
		printf("%4d", i);
	putchar('\n');
	
	for (i = 1; i < MAXWORD; ++i)
		printf("%4d", wl[i]);
	putchar('\n');
	if(ovflow > 0)
		printf("There are %d words >= %d\n", ovflow, MAXWORD);
	
	
}
