/*
#include<stdio.h>
void fun(int a)
{
	int x,y,z ;	
	x = 10;			
	y = 12;
	z = 3;
	printf("fun���������%d\t%d\t%d\t%d\n",x,y,z,a);	//��ӡx,y,z,
}

void main()
{
	int x,y,z ;
	x = 10;
	y = 1001;
	z = 1003;
	fun(x);
	printf("�����������%d\t%d\t%d\n",x,y,z);	//��ӡi,j,k;
}

*/


/*
#include<stdio.h>
void fc()
{
	auto int a  ;			//�¸�ֵ
	static int b ;		//ʹ����һ�κ����������ֵ
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

