/*��������Ԫ��
���10������������Ԫ��

#include<stdio.h>

int max(int x,int y)
{
	return x>y?x:y;
}

void main()
{
	int a[10],b,c,i;
	for(i=0;i<10;++i)
		scanf("%d",&a[i]);  
	for(i=1,b = a[0];i<10;++i)
	{
		c = max(b,a[i]);
		if( c > b)
			b = c;
	}
	printf("��������%d\n",b);
}

*/

/*����һά������
��10����ֵ��ƽ��ֵ

#include<stdio.h>	
float ave(float a[])	//���������ͱ���������Ӧ�÷ֱ������飬����������һ��
{						//ϵͳ������β�����Ĵ�С��a[]Ҳ���Եġ�
	int i;				//��ʵ���������Ԫ�صĵ�ַ���ݸ��βΣ����a��numʹ����ͬ���ڴ��ַ
	float b,sum = a[0];
	for(i=1;i<10;++i)
		sum =sum+a[i];
	b = sum/10;
	return b;
}
void main()
{
	float num[10],average;
	int i;
	for(i=0;i<10;++i)
		scanf("%f",&num[i]);
	average = ave(num);
	printf("ƽ��ֵ��%f\n",average);
}
*/





/*���ݶ�ά������

#include<stdio.h>
int max(int a[][4])	//������������һά�Ĵ�С
{
	int i,j,max;
	max = a[0][0];
	for(i=0;i<3;++i)
		for(j=0;j<4;++j)
			if(a[i][j]>max) max = a[i][j];
	return max;

}

void main()
{
	int a[3][4] = {{3,2,7,4},{8,5,8,3},{2,5,3,8}};
	printf("%d\n",max(a));

}*/