#include <stdio.h>

/*
	��дһ������ ����ӡ�����е��ʳ��ȵ�ֱ��ͼ��ˮƽ�����ֱ��ͼ�Ƚ����׻��ƣ�
	��ֱ�����ֱ��ͼ��Ҫ����Щ�� 
	�����Ǵ�ֱ����
*/

#define MAXHIST 15
#define MAXWORD	11
#define	IN 1
#define OUT 0 

main()
{
		int c, i, j, nc, state; 
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
	
	/*��ӡ�Ǻ�*/
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
