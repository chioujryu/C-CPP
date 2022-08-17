/*
实现将公元0年~10000年的所有闰年都打印出来。

#include <stdio.h>
void main()
{
	int year = 0;
	do
	{
		if(((year%4==0) && (year%100!=0)) || (year%400 ==0))
			printf("%d是闰年\n",year);
		++year;   //10001
	}
	while(year <= 10000);
	printf("结束\n");
}


*/




/*   求1+2+3+4+….+x的结果（x由用户输入的数字）      */
#include <stdio.h>
void main()
{
	int i = 1,total = 0,x;
	
	scanf("%d",&x);
	do
	{
		total += i;
		printf("每次循环的累加和为：%d\n",total);
		++i;
	}
	while(i <= x);
	printf("最终累加和为：%d\n",total);
}

