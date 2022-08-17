/*	  	 		
1、&& = a和b都小于100时(a<100,并且b<100)，输出a和b的值都小于100
2、|| = a和b有一个小于100(a<100,或者b<100)，输出a和b的值其中有一个小于100
3、! = a的值不大于100，输出a的值不大于100   
#include <stdio.h>
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<100 && b<100)
	{
		printf("a和b的值都小于100\n");
	}
	if(a<100 || b<100) 
	{
		printf("a和b的值其中有一个小于100\n");
	}
	if (!(a>100))
	{
		printf("a的值不大于100\n");
	}
}
 */


/*	逻辑运算符和逻辑表达式	
#include <stdio.h>
int main()
{
	int a=4,b=5;
	if(2)			//  'a'    0   !a   a&&b  a||b   !a||b   4&&0||2    b>3&&8<a-!0
	{				//   if 只要有值就會被執行
		printf("if statement is executed\n");     // if语句块被执行了
	}
}
*/




/*	逻辑运算符和逻辑表达式	

#include <stdio.h>
int main()
{
	int a=1,b=2,c=3,d=4;
	if(a>b && c>d)			
	{
		printf("if statement is executed\n");
	}
}
*/





/*	判断是否为闰年
①能被4整除，但不能被100整除，如2008
②能被400整除都是闰年，如2000  
#include <stdio.h>
void main()
{
	int year;
	scanf("%d",&year);
	if( ((year%4==0) && (year%100!=0)) || (year%400 ==0) )
	{
		printf("%d is leap year", year); //是闰年
	}
}
*/
#include <stdio.h>
void main()
{
	int year;
	scanf("%d",&year);
	if( ((year%4==0) && (year%100!=0)) || (year%400 ==0) )
	{
		printf("%d is leap year闰年", year); //是闰年
	}
}

