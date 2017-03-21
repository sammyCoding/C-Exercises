#include <stdio.h>

/*
注释 

打印0到300，华氏温度和摄氏温度对照表 
*/
 
main()
{ 
	/*所有变量先声明后使用。声明通常放在函数起始处，在任何可执行语句之前。
	声明用于说明变量的属性，它由一个类型名和一个变量表组成，如下  
	*/ 
	int fahr, celsius;
	int lower, upper, step;
	
	lower = 0;   /*	温度表的下限	*/
	upper = 300; /*	温度表的上限 	*/
	step = 20;
	
	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%3d\t%6d\n", fahr, celsius);
		fahr = fahr + step;
	}
}
