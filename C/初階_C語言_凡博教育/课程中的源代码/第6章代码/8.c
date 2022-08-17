/*传递多维数组名
#include<stdio.h>
void fun(int a)
{
	int x,y,z ;	
	x = 10;			
	y = 12;
	z = 3;
	printf("fun函数输出：%d\t%d\t%d\t%d\n",x,y,z,a);	//打印x,y,z,
}

void main()
{
	int x,y,z ;
	x = 10;
	y = 1001;
	z = 1003;
	fun(x);
	printf("主函数输出：%d\t%d\t%d\n",x,y,a);	//打印i,j,k;
}*/

/*
#include <stdio.h>
int main()
{ 
	int i;
	scanf("%d",&i);
	if(i>3)
	{
		int a = 2,b = 4;	//
		printf("%d\t%d\n",a,b);
	}
	
}*/




/*
int a =10;			//各个函数对全局变量进行改变，会使得全局发生变化
#include <stdio.h>
void ff()
{	
	int a = 1000;	
	int c = 100000;
	a++;
	printf("%d\t%d\n",a,c);
}
									//int b = 1;
void main()
{
	int c = 100;
	a++;
	printf("%d\t%d\n",a,c);
	ff();
}*/




/*全局变量可以实现各个函数之间数据的直接传递,减少return的传递*/
float max = 1 ,min = 1;

#include<stdio.h>	
float ave(float a[])	
{						
	int i;				
	float b,sum = a[0];
	for(i=1;i<10;++i)
	{	if(a[i]>max) max = a[i];
		if(a[i]<min) min = a[i];
		sum =sum+a[i];
	}
	b = sum/10;
	return b;
}
void main()
{
	float num[10],average;
	int i;
	for(i=0;i<10;++i)
		scanf("%f",&num[i]);
	max = num[0];
	min = num[0];
	average = ave(num);
	printf("平均值是%f\t最大值是%f\t最小值是%f\t",average,max,min);
}
