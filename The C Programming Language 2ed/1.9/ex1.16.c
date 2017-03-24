#include <stdio.h>

/*
	修改打印最长文本行的程序的主程序main，使之可以打印任意长度的输入行的长度，
	并尽可能多地打印文本。 
*/ 

#define MAXLINE 1000
int getline(char line[], int maxline);
void copy(char to[], char from[]);


int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	
	max = 0;
	while((len = getline(line, MAXLINE)) > 0) {
		printf("%d, %s", len, line);
		if (len > max) {
				max = len;
				copy(longest, line);
		}
	}
	if (max > 0)
		printf("%s", longest);
	
	return 0;
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

void copy(char to[], char from[])
{
	int i;
	i = 0;
	while((to[i] = from[i]) !='\0')
	++i;
}





















