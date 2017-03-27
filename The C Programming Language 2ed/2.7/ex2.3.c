#include <stdio.h>
/*
	��д����htoi(s),����ʮ������������ɵ��ַ���(������ѡ��ǰ׺0x��0X)ת��
	Ϊ��֮�ȼ۵�����ֵ���ַ�����������������ְ�����0-9��a-f�Լ�A-F. 
*/ 

#define YES 1
#define NO 0

int htoi(char s[])
{
	int hexdigit, i, inhex, n;
	i = 0;
	if (s[i] == '0'){
		++i;
		if(s[i] =='x' || s[i] == 'X')
		{
			++i;
		}
	}
	
	n = 0;
	inhex = YES;
	for (; inhex == YES; ++i) {
		if (s[i] >= '0' && s[i] <= '9')
			hexdigit = s[i]-'0';
		else if (s[i] >= 'a' && s[i] <= 'f')
			hexdigit = s[i] - 'a' + 10;
		else if (s[i] >= 'A' && s[i] <= 'F')
			hexdigit = s[i] - 'A' + 10;
		else
			inhex = NO;
		
		if (inhex == YES)
			n = 16 * n + hexdigit;
	}
	
	return n;
}

int main()
{
	int c, i;
	char line[100];
	for (i = 0;(c = getchar()) != EOF; ++i) {
		line[i] = c;
	}
	
	printf("line =  %s, n = %d",line,htoi(line));
}
