/*���ݶ�ά������
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
	printf("�����������%d\t%d\t%d\n",x,y,a);	//��ӡi,j,k;
}*/

/*
#include <stdio.h>
int main()
{ 
	int i;
	scanf("%d",&i);
	if(i>3)
	{
		int a = 2,b = 4;	//
		printf("%d\t%d\n",a,b);
	}
	
}*/




/*
int a =10;			//����������ȫ�ֱ������иı䣬��ʹ��ȫ�ַ����仯
#include <stdio.h>
void ff()
{	
	int a = 1000;	
	int c = 100000;
	a++;
	printf("%d\t%d\n",a,c);
}
									//int b = 1;
void main()
{
	int c = 100;
	a++;
	printf("%d\t%d\n",a,c);
	ff();
}*/




/*ȫ�ֱ�������ʵ�ָ�������֮�����ݵ�ֱ�Ӵ���,����return�Ĵ���*/
float max = 1 ,min = 1;

#include<stdio.h>	
float ave(float a[])	
{						
	int i;				
	float b,sum = a[0];
	for(i=1;i<10;++i)
	{	if(a[i]>max) max = a[i];
		if(a[i]<min) min = a[i];
		sum =sum+a[i];
	}
	b = sum/10;
	return b;
}
void main()
{
	float num[10],average;
	int i;
	for(i=0;i<10;++i)
		scanf("%f",&num[i]);
	max = num[0];
	min = num[0];
	average = ave(num);
	printf("ƽ��ֵ��%f\t���ֵ��%f\t��Сֵ��%f\t",average,max,min);
}
