#include <stdio.h>

/*
����ԭ�ͣ�
	Ҳ����д������ int power(int, int);
	��������ָ�������������� 
*/

int power(int m, int n);

main()
{
	int i;
	
	for (i = 0; i < 10; ++i)
		pintf("%d	%d	%d\n", i, power(2,i), power(-3,i));
	
	return 0;
	
}

/*
	���������һ����ʽ��
	����ֵ���� ������(0��������������)
	{
		��������
		������� 
	} 

*/

int power(int base, int n) 
{
	int i, p;
	p = 1;
	for (i = 1; i <= n; ++i)
		p = p * base;
	return p;
}
