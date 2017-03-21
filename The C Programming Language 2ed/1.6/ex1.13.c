#include <stdio.h>

/*
	��дһ������ ����ӡ�����е��ʳ��ȵ�ֱ��ͼ��ˮƽ�����ֱ��ͼ�Ƚ����׻��ƣ�
	��ֱ�����ֱ��ͼ��Ҫ����Щ�� 
	������ˮƽ���� 
*/

#define MAXHIST 15
#define MAXWORD	11
#define	IN 1
#define OUT 0 

main()
{
	int c, i, nc, state; 
	int len;	/*�������ĳ���*/
	int maxvalue;	/*����wl�����ֵ*/
	int ovflow;		/*���ʳ��ȹ���������*/
	int wl[MAXWORD];	/**/
	
	/*��ʼ��ֵ*/
	state = OUT;
	nc = 0;
	ovflow = 0;
	for (i = 0; i < MAXWORD; ++i)
		wl[i] = 0;
	
	/*ͳ�Ƹ��ֳ��ȵĵ���*/ 
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
	
	/*�ҳ���������*/
	maxvalue = 0;
	for (i = 1; i < MAXWORD; ++i)
		if (wl[i] > maxvalue)
			maxvalue = wl[i]; 
	
	for (i = 1; i < MAXWORD; ++i ) {
		printf("%5d  -  %5d : ", i, wl[i]);
		if (wl[i] > 0) {
			if ((len = wl[i] * MAXHIST / maxvalue) <= 0)
				len = 1;
		} else
			len = 0; 
			
		while (len > 0) {
			putchar('*');
			--len;
		}
		putchar('\n');
	} 
	if (ovflow > 0) 
		printf("There are %d words >= %d\n", ovflow, MAXWORD);
}
