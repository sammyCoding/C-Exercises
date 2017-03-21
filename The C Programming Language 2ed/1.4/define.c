#include <stdio.h>

/*
#define 名字 替换文本
符号常量通常用大写字母拼写，这样可以很容易与用小写字母拼写的变量名区分。
#define指令行的末尾没有分号。 
*/

#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
	int fahr;
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
		printf("%3d	%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}
}
