#include <stdio.h>

/*
ע�� 

��ӡ0��300�������¶Ⱥ������¶ȶ��ձ� 
*/
 
main()
{ 
	/*���б�����������ʹ�á�����ͨ�����ں�����ʼ�������κο�ִ�����֮ǰ��
	��������˵�����������ԣ�����һ����������һ����������ɣ�����  
	*/ 
	int fahr, celsius;
	int lower, upper, step;
	
	lower = 0;   /*	�¶ȱ������	*/
	upper = 300; /*	�¶ȱ������ 	*/
	step = 20;
	
	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%3d\t%6d\n", fahr, celsius);
		fahr = fahr + step;
	}
}
