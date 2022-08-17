/*	实现将公元0年~10000年的所有闰年都打印出来。
#include <stdio.h>
void main()
{
	int year,i;				//i;
	for(year = 0 ,i=100; year <= 10000; year++,i--)	 //i++
	{
		if(((year%4==0) && (year%100!=0)) || (year%400 ==0))
		{
			printf("%d是闰年\n",year);
		}
		
	}
	printf("程序结束\n");
//	printf("%d\n",i);
}
*/


/*
#include <stdio.h>
int main()
{
	int i = 0, x;
	x = i++; //先讓x變成i的值，再加1
	x = ++i; //先讓x等於1，再加i
}
*/

/*  
#include <stdio.h>
void main()
{
	char c;
	for(;(c = getchar())!='\n';)
		printf("%c\n",c);
		
} 
*/
