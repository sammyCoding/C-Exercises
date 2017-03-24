/*��дһ������ɾ��ÿ��������ĩβ�Ŀո��Ʊ������ɾ����ȫ�ǿո����
˼·���ҳ����з�\n ��ȥ������Ŀո���Ʊ��������\n��\0 

*/

#include <stdio.h>
#define MAXVALUE 1000

int deleteblankandtab(char c[]);
int getline(char line[], int maxline);

int main()
{
	char line[MAXVALUE];
	while (getline(line, MAXVALUE) > 0) {
		if (deleteblankandtab(line) > 0) {
			printf("%s", line);
		}
	}
	
	return 0;
}

int deleteblankandtab(char c[]) 
{
	int i;
	i = 0;
	
	while (c[i] != '\n') {
		++i;
	} 
 
 	--i;
 	while (i > 0 && (c[i] == ' ' || c[i] == '\t')) {
 		--i;
	 }
	if (i >= 0) {
		++i;
		c[i] = '\n';
		++i;
		c[i] = '\0';
	}
	 
 	return i;
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
