#include <stdio.h>

/*
1.3 �޸��¶�ת������ʹ֮����ת����Ķ�����ӡһ������
1.4 ��дһ�������ӡ�����¶�ת��Ϊ��Ӧ�����¶ȵ�ת���� 
*/

main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	celsius = lower;
	printf("�����¶ȱ�ת��Ϊ�����¶ȱ�%d-%d��\n", lower, upper);
	while (celsius <= upper) {
		fahr = celsius * (9.0/ 5.0) + 32.0;
		printf("%3.0f	%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
