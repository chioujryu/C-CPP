/*	赋值运算符	
#include <stdio.h>
void main()
{
	int a ;
	a = 4*2+3;
}
*/


/*	复合赋值运算符	
#include <stdio.h>
void main()
{
	int a = 8;
	a %= 4;    //   -=  /=  *=  %=  a += b+2 看优先级   a = a%4
	printf("结果：%d\n",a);
}
*/


/*	赋值表达式	
#include <stdio.h>
void main()
{
	int a ,b;
	a = (b = 5);     // 分开两条语句 
	printf("结果：%d\n%d\n",a,b);
}
*/


/*	赋值过程中的类型转换---情况1
#include <stdio.h>
void main()
{
	int a;
	a = 4;
	printf("结果：%d\n%",a);
}
*/


/*	赋值过程中的类型转换---情况2
#include <stdio.h>
void main()
{
//	int a;		//包括单、双精度
//	a = 3.14;
//	printf("结果：%d\n%",a);
//	float b ;
//	b = 3;
//	printf("结果：%f\n%",b);
//	float c ;					//将一个float型数据存储给double型变量时，数值不变。
//	c = 1.4343434343434;
//	printf("结果：%.12f\n",c);//并不代表double类型的精度只有6位小数
	int i = 289;
	char d = 'a';
	d = i;
	printf("结果：%d\n%",d);

}
*/



/*	变量赋初值
#include <stdio.h>
void main()
{
//	int a=3,b= 2,c =1;   // 相当于int a,b,c;a=3;b= 2;c =1;
	printf("result = %d\n%",a);
}
*/
