/* �����\���(  /  )   
#include <stdio.h>
void main()
{
	float  a,b,c;
	a = 5.0;	
	b = 3.0;
	c = a/b;
	printf("�������� %f\n",c);	
}
*/





/* ���N�\���(  %  )  
#include <stdio.h>
void main()
{
	int  a,b,c;					
	a = 10;	
	b = 3;
	c = a %b;
	printf("���N����� %d\n",c);	
}
*/


/* �������Ԝp�\��(  ++  --  )   
#include <stdio.h>
void main()
{
	int  a;					
	a = 3;
	printf("a�����%d\n",a++);	
	printf("a�����%d\n",a);
}
*/




/* �\������ȼ�     ��Ŀ�����  ˫Ŀ����� ��Ŀ�����������
#include <stdio.h>
void main()
{
	int  a = 2,b;					
	b = 3+4*(-2)%(3);   //3+(4*(-2)%(++a))
	printf("b = 3+4*(-2)%(++a)\n");
	printf("b = %d\n",b);	
}
*/



/* ��ͬ�������ݼ�Ļ������
#include <stdio.h>
void main()
{
	int  a = 2;
	char b = 'y';				 //y�ַ���Ӧ��ASCII��121
	float c = 1.36f;
	printf("c = %f\n",c);
	printf("result = %f\n",b+c);	 //������̵�ת����ϵͳ�Զ���ɵ�
}
*/





/* ����һ����д��ĸ�������Ӧ��Сд��ĸ
#include <stdio.h>
void main()
{
	char a = 'A';
	printf("%c\n",a);
	printf("%c\n",a+32);
}
*/




/* ǿ������ת��   
#include <stdio.h>
void main()
{
	int  a = 2;
	float b = 1.34f;
	printf("reslut = %d\n",(int)(a+b));	 //(int)a+b;�۲�����ת��Ϊ�����͵Ľ����������ת��Ϊ���͵Ľ��
	printf("reslut = %f\n",(float)(a+b));
}
 */ 



/* ǿ������ת��  
#include <stdio.h>
void main()
{
	float  a = 7.98f;
	printf("�����%d\n",(int)a%3);	 //(int)a%3 �Զ�����ת���޷�ʵ��ʱʹ��ǿ������ת��
}
   */