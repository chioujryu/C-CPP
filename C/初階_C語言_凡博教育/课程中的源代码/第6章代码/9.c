/*
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
	printf("主函数输出：%d\t%d\t%d\n",x,y,z);	//打印i,j,k;
}

*/


/*
#include<stdio.h>
void fc()
{
	auto int a  ;			//新赋值
	static int b ;		//使用上一次函数结束后的值
	a+= 3;		//a =3  
	b+= 3;		//b = 9
	printf("a=%d\tb=%d\n",a,b);
}
void main()
{
	fc();
	fc();
	fc();
}*/




/**/
int a =10;
#include <stdio.h>
void ff()
{	
	int c = 100000;
	a++;
	printf("%d\t%d\n",a,c);
}
									
void main()
{
	int c = 100;
	a++;
	printf("%d\t%d\n",a,c);
	ff();
}

