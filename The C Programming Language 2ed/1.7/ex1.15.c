#include <stdio.h>

/*
	���±�д1.2���е��¶�ת������ʹ�ú���ʵ���¶�ת������ 

*/ 

float celsius(float fahr);
int main()
{
	float fahr;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	while (fahr <= upper) {
		printf("%3.0f	%6.1f\n", fahr, celsius(fahr));
		fahr = fahr + step;
	}
	return 0;
}

float celsius(float fahr)
{
	return (5.0/9.0) * (fahr-32.0);
}
