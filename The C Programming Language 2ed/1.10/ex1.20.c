#include <stdio.h>

/*
	��д����detab,�������е��Ʊ���滻���ʺ���Ŀ�Ŀո�ʹ�ո�
	��������һ���Ʊ����ֹλ�ĵط��������Ʊ���ֹλ��λ���ǹ̶��ģ�����ÿ��n�� 
	�ͻ����һ���Ʊ����ֹλ��nӦ����Ϊ�������Ƿ��ų���? 
*/ 

#define TABINC 8

int main()
{
	int c, nb, pos;
	
	nb = 0;
	pos = 1;
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			nb = TABINC - (pos -1) % TABINC;
			while (nb > 0) {
				putchar(' ');
				++pos;
				--nb;
			}
		} else if ( c == '\n') {
			putchar(c);
			pos = 1;
		} else {
			putchar(c);
			++pos;
		}
	}
	
}

