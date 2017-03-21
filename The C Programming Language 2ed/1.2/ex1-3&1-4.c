#include <stdio.h>

/*
1.3 修改温度转换程序，使之能在转换表的顶部打印一个标题
1.4 编写一个程序打印摄氏温度转换为相应华氏温度的转换表 
*/

main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	celsius = lower;
	printf("摄氏温度表转换为华氏温度表（%d-%d）\n", lower, upper);
	while (celsius <= upper) {
		fahr = celsius * (9.0/ 5.0) + 32.0;
		printf("%3.0f	%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
