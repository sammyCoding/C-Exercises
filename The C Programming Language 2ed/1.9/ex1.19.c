/*��д����reverse(s), ���ַ���s�е��ַ�˳��ߵ�������
ʹ�øú�����дһ������ÿ�εߵ�һ���������е��ַ�˳�� 

*/

#include <stdio.h>
#define MAXVALUE 1000

int getline(char line[], int maxline);
void reverse(char s[]);

int main() 
{
	char line[MAXVALUE];
	while (getline(line, MAXVALUE) > 0) {
		reverse(line);
		printf("%s", line);
	}
	return 0;
}

void reverse(char s[]) 
{
	int i, j;
	char temp;
	
	i = 0;
	while (s[i] != '\0') {
		++i;
	}
	--i;
	if (s[i] == '\n') {
		--i;
	}
	j = 0;
	while (j < i) {
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		--i;
		++j; 
	}
	
} 

int getline(char s[], int lim)
{
	int c, i, j;
	
	j = 0;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
		if (i < lim-2) {
			s[j] = c;
			++j;
		}
	}	
	if (c == '\n') {
		s[j] = c;
		++j;
		++i;
	}

	s[j] = '\0';
	return i;
}
