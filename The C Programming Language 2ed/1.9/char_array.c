#include <stdio.h>

/*

程序读入一组文本行，并把最长的文本行打印出来。 
*/
#define MAXLINE 100

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
	int len;	//当前行长度 
	int max;	// 发现的最长行的长度 
	char line[MAXLINE];	 // 当前输入的行
	char longest[MAXLINE]; //用于保存最长的行
	
	max = 0;
	while ((len = getline(line, MAXLINE)) > 0) {
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
	int c, i;
	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
	++i;
}

