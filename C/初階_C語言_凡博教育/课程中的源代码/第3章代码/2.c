/*  <	<=	>	>=	==	!= 
1������a,b,c�������Ƚ�a��b�Ĵ�С������С�������浽c��
2�����a��b��ȵ�ʱ��c�洢a��b�κ�һ������
2�����a��b��ȵ�ʱ����ʾa��b���(==)
2�����a��b����ȵ�ʱ����ʾa��b�����
#include <stdio.h>
void main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	if(a>=b)
	{
		c = b;
		printf("c=%d\n",c);
	}
	if(a!=b)
	{
		printf("a and b are not equal \n"); //a��b�ǲ���ȵ�
	}
}
*/



/*	1�����棬0�����	
#include <stdio.h>
void main()
{
	int a=4,b =5,c =1,f;
//	printf("%d\n",3<4);
//	printf("%d\n",a<b==c);
//	d = a>b	;		// a>bΪ��0    d = 0
//	printf("%d\n",d);
	f = a<b>c;	// ������������ҽ�Ϸ��򣬲����@�ӌ������Ԟ�false
	printf("%d\n",f);
}
*/
