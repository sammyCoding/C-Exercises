/*编写一个程序，删除每个输入行末尾的空格及制表符，并删除完全是空格的行
思路：找出换行符\n ，去掉多余的空格和制表符，补上\n和\0 

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
