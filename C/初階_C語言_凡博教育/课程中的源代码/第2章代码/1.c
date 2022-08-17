/* 整型常量
#include <stdio.h>
void main()
{	int 1a_,b,c;
	a_1 = 1001;
	b = 21;
	c = a_1+b;
	printf("c = %d\n",c);

}
*/


/* 实型常量-->十进制小数
#include <stdio.h>
void main()
{
	double a = 12.3,b = 2.35,c;
	c = a+b;
	printf("c = %f\n",c);

}
*/

/*   实型常量-->指数形式
#include <stdio.h>
void main()
{
	double a = 12.3e4,b = 2.35e4,c; // e4 = 10的4次方
	c = a+b;
	printf("c = %f\n",c);

}
*/

/*   字符常量-->普通字符 
#include <stdio.h>
void main()
{
	char i = 'h';    // 'hh'
	printf("%c\n",i);
}
*/




/*   字符常量-->轉義字浮
#include <stdio.h>
void main()
{	
	char a = '\'';  // '\' = '
	printf("hello world\nhello\t world");   //\n    \'  \t
	printf("%c",a);
}
*/


/*   字符串常量 
#include <stdio.h>
void main()
{	
	char a[15] = "hello world";    // 'hello world'
	printf("%s\n",a);    
}
*/


/*   符号常量 
# define PI  3.1415926    // 注意行末尾没有分号
#include <stdio.h>
void main()
{	
	printf("%f\n",PI);    
}
*/



/* 变量
#include <stdio.h>
void main()
{
	double a = 12.3,b = 2.35;
	a = a+b;
	printf("a = %f\n",a);
}
*/


/* 常变量-->常变量
#include <stdio.h>
void main()
{
	const int a = 3;   //const int a = 3;
	a = a + 1;
	printf("a = %d\n",a);
}
*/

/* 3.2.2数据类型
#include <stdio.h>
void main()
{
	double i;
	i = 1/3.0;
	printf("i = %f\n",i);
}
*/
