/*	  	 		
1��&& = a��b��С��100ʱ(a<100,����b<100)�����a��b��ֵ��С��100
2��|| = a��b��һ��С��100(a<100,����b<100)�����a��b��ֵ������һ��С��100
3��! = a��ֵ������100�����a��ֵ������100   
#include <stdio.h>
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<100 && b<100)
	{
		printf("a��b��ֵ��С��100\n");
	}
	if(a<100 || b<100) 
	{
		printf("a��b��ֵ������һ��С��100\n");
	}
	if (!(a>100))
	{
		printf("a��ֵ������100\n");
	}
}
 */


/*	�߼���������߼����ʽ	
#include <stdio.h>
int main()
{
	int a=4,b=5;
	if(2)			//  'a'    0   !a   a&&b  a||b   !a||b   4&&0||2    b>3&&8<a-!0
	{				//   if ֻҪ��ֵ�͕�������
		printf("if statement is executed\n");     // if���鱻ִ����
	}
}
*/




/*	�߼���������߼����ʽ	

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





/*	�ж��Ƿ�Ϊ����
���ܱ�4�����������ܱ�100��������2008
���ܱ�400�����������꣬��2000  
#include <stdio.h>
void main()
{
	int year;
	scanf("%d",&year);
	if( ((year%4==0) && (year%100!=0)) || (year%400 ==0) )
	{
		printf("%d is leap year", year); //������
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
		printf("%d is leap year����", year); //������
	}
}

