/* ����1/3    
#include <stdio.h>
void main()
{
	double a;				
	a = 1/3.0;			
	printf("a = %f\n",a);	
}
*/



/* ��������(int)   
#include <stdio.h>
void main()
{
	int a;					//��Ч��int a ;int b;  
	a = 2147483697;			//a����ֵ��Χ��-2147483648 ~ 2147483647��ռ4���ֽ�
	printf("a = %d\n",a);	//����û�ж�ͷд,
	printf("a size = %d",sizeof(a));    //a��ӛ���w��С��4��byte
}
*/


/* ������(short int)     
#include <stdio.h>
void main()
{
	short int a;			//a��ֵ��Χ�� -32768 ~ 32767��ռ2���ֽ�
	a = 32866;			
	printf("a = %d\n",a);
	printf("a size = %d",sizeof(a));    //a��ӛ���w��С��2��byte
}
*/

/* ������(long int��long)  
#include <stdio.h>
void main()
{
	long  a;			//a��ֵ��Χ�� -2147483648 ~ 2147483647,ռ4���ֽ�
	a = 2147483647;			
	printf("a = %d\n",a);
}
 */




/* ˫������(long long int��long long)  
#include <stdio.h>
void main()
{
	long long  a;			//a��ֵ��Χ�� -9223372036854775808 ~ 9223372036854775807,ռ8���ֽ�
	a = 2147483647;			
	printf("a = %d\n",a);
	printf("a size = %d",sizeof(a));    //a��ӛ���w��С��8��byte
}
 */


/* ��������(int)   
#include <stdio.h>
void main()
{
	unsigned int a;					//��Ч��int a ;int b;  
	a = -5;			//a����ֵ��Χ��-2147483648 ~ 2147483647��ռ4���ֽ�
	printf("a = %u\n",a);	//����û�ж�ͷд,
}
*/



/* �ַ�������(char)   
#include <stdio.h>
void main()
{
	char a ;					//char�����ַ�������ռ1���ֽ�
	a = 'z';					//
	printf("a = %d\n",a);	//  %c  %d  
}
*/




/* ����������(float)  
#include <stdio.h>
void main()
{
	float a;					//����4���ֽڣ�6λ��Ч���֣���ֵ��Χ��-3.4e-38 ~ 3.4e38 
	a = 3.40e37f;				//���־��棬��ĩβ����f,����ϵͳĬ��ʹ��˫����
	printf("a = %f\n",a);		//
	printf("a size = %d",sizeof(a));
}
 */


/* ����������(double)   
#include <stdio.h>
void main()
{
	double a;					//����8���ֽڣ�15λ��Ч���֣���ֵ��Χ��-1.7e-308 ~ 1.7e308
	a = 1.7e308;				
	printf("a = %f\n",a);	
	printf("a size = %d",sizeof(a));
}
*/
