/* 除法運算符(  /  )   
#include <stdio.h>
void main()
{
	float  a,b,c;
	a = 5.0;	
	b = 3.0;
	c = a/b;
	printf("求除结果： %f\n",c);	
}
*/





/* 求餘運算符(  %  )  
#include <stdio.h>
void main()
{
	int  a,b,c;					
	a = 10;	
	b = 3;
	c = a %b;
	printf("求餘结果： %d\n",c);	
}
*/


/* 自增、自減運算(  ++  --  )   
#include <stdio.h>
void main()
{
	int  a;					
	a = 3;
	printf("a结果：%d\n",a++);	
	printf("a结果：%d\n",a);
}
*/




/* 運算符優先級     单目运算符  双目运算符 三目运算符的由来
#include <stdio.h>
void main()
{
	int  a = 2,b;					
	b = 3+4*(-2)%(3);   //3+(4*(-2)%(++a))
	printf("b = 3+4*(-2)%(++a)\n");
	printf("b = %d\n",b);	
}
*/



/* 不同类型数据间的混合运算
#include <stdio.h>
void main()
{
	int  a = 2;
	char b = 'y';				 //y字符对应的ASCII码121
	float c = 1.36f;
	printf("c = %f\n",c);
	printf("result = %f\n",b+c);	 //计算过程的转换是系统自动完成的
}
*/





/* 给定一个大写字母，输出对应的小写字母
#include <stdio.h>
void main()
{
	char a = 'A';
	printf("%c\n",a);
	printf("%c\n",a+32);
}
*/




/* 强制类型转换   
#include <stdio.h>
void main()
{
	int  a = 2;
	float b = 1.34f;
	printf("reslut = %d\n",(int)(a+b));	 //(int)a+b;观察整型转换为浮点型的结果，浮点型转换为整型的结果
	printf("reslut = %f\n",(float)(a+b));
}
 */ 



/* 强制类型转换  
#include <stdio.h>
void main()
{
	float  a = 7.98f;
	printf("结果：%d\n",(int)a%3);	 //(int)a%3 自动类型转换无法实现时使用强制类型转换
}
   */