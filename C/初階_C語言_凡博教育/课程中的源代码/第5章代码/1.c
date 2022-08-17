/*

#include <stdio.h>
void main()
{
//	int stdu0,stdu1,stdu2,stdu3,stdu4,stdu5,stdu6,stdu7,stdu8,stdu9;
	int n =10;
	int stud[10]={98,99,97,96,95,97,93,90,91,99};
	printf("哈哈哈%d\n",stud[3-2]);
}
*/

/*
对10个数依次赋值为5,6,7,8,9,10,11,12,13,14并逆序打印到屏幕中。
也可以通过循环赋值的方式给数组赋值

#include <stdio.h>
void main()
{
	int i;
	int num[] ={5,6,7,8,9,10,11,12,13,14};
	for(i=9;i>=0;--i)
	{
		printf("%d\t",num[i]);
	}
}
*/



/* 求斐波那契数列的前40个数。特点，第1,2个数为1，从第三个数开始，该数是前面两个数之和
 例如：1,1,2,3,5,8,13,...
使用数组将斐波那契数列前40个数据保存下来。
#include <stdio.h>
void main()
{
	int a = 1;
	int b = 1;
	int c,i;
	printf("%d\n%d\n",a,b);
	for(i = 1; i <= 38; i++)
	{
		c = a + b;
		printf("%d\n",c);
		a = b;
		b = c;	
	}
}
   */
/**/
#include <stdio.h>
void main()
{
	int i;
	int fib[40]={1,1};  
	for(i = 2; i < 40; ++i)	//i=3
	{
		fib[i] = fib[i-1]+fib[i-2];	//2
	}
	for(i=0;i<40;++i)
	{
		printf("%d\t",fib[i]);
	}
}
