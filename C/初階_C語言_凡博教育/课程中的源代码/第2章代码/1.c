/* ���ͳ���
#include <stdio.h>
void main()
{	int 1a_,b,c;
	a_1 = 1001;
	b = 21;
	c = a_1+b;
	printf("c = %d\n",c);

}
*/


/* ʵ�ͳ���-->ʮ����С��
#include <stdio.h>
void main()
{
	double a = 12.3,b = 2.35,c;
	c = a+b;
	printf("c = %f\n",c);

}
*/

/*   ʵ�ͳ���-->ָ����ʽ
#include <stdio.h>
void main()
{
	double a = 12.3e4,b = 2.35e4,c; // e4 = 10��4�η�
	c = a+b;
	printf("c = %f\n",c);

}
*/

/*   �ַ�����-->��ͨ�ַ� 
#include <stdio.h>
void main()
{
	char i = 'h';    // 'hh'
	printf("%c\n",i);
}
*/




/*   �ַ�����-->�D�x�ָ�
#include <stdio.h>
void main()
{	
	char a = '\'';  // '\' = '
	printf("hello world\nhello\t world");   //\n    \'  \t
	printf("%c",a);
}
*/


/*   �ַ������� 
#include <stdio.h>
void main()
{	
	char a[15] = "hello world";    // 'hello world'
	printf("%s\n",a);    
}
*/


/*   ���ų��� 
# define PI  3.1415926    // ע����ĩβû�зֺ�
#include <stdio.h>
void main()
{	
	printf("%f\n",PI);    
}
*/



/* ����
#include <stdio.h>
void main()
{
	double a = 12.3,b = 2.35;
	a = a+b;
	printf("a = %f\n",a);
}
*/


/* ������-->������
#include <stdio.h>
void main()
{
	const int a = 3;   //const int a = 3;
	a = a + 1;
	printf("a = %d\n",a);
}
*/

/* 3.2.2��������
#include <stdio.h>
void main()
{
	double i;
	i = 1/3.0;
	printf("i = %f\n",i);
}
*/
