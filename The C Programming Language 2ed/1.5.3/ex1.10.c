#include <stdio.h>

/*
	��дһ�������븴�Ƶ�����ĳ��򣬲������е��Ʊ���滻Ϊ\t���ѻ��˷��滻Ϊ\b
	,�ѷ�б���滻Ϊ\\���������Խ��Ʊ���ͻ��˷��Կɼ��ķ�ʽ��ʾ������ 

*/


main()
{
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '\t') 
			printf("\\t ");
		if (c == '\b') 
			printf("\\b ");
		if (c == '\\')
			printf("\\\\ ");
		if (c != '\t')
			if (c != '\b')
				if (c != '\\')
					putchar(c);
	}


} 
