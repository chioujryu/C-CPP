/*�����������

#include <stdio.h>

void start()
{
	char b[5][5]={{' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},
					{' ','*',' ','*'},{' ',' ','*'}};
	int i,j;
	for(i = 0;i<5;i++)
	{
		for(j=0;j<5;j++)
			printf("%c",b[i][j]);
		printf("\n");
	}
}

void main()
{
	printf("��ӡ����**\n");
	start();
	printf("�ٴδ�ӡ����**\n");
	start();
	printf("���ٴδ�ӡ����**\n");
	start();
}
*/





/* �������ʽ 
#include <stdio.h>
int max(char x, int y)
{						//����x��y������ֵ
	int z;
	z = x>y?x:y;
	return z;
}

void main()
{
	int a,b,c;
	scanf("%d,%d",&a,&b);
	c = max(4,a+3);
	printf("%d\n",c);
}
*/


/*��������
#include <stdio.h>
int max(int x, int y)
{						//����x��y������ֵ
	int z;
	z = x>y?x:y;
	return z;
}

void start_num(int num)
{
	int i,j,k ;
	char b[5][5]={{' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},{' ','*',' ','*'},{' ',' ','*'}};
	for(k= 0;k<num;++k)
	{
		for(i = 0;i<5;i++)
		{
			for(j=0;j<5;j++) printf("%c",b[i][j]);
			printf("\n");
		}
	}
}

void main()
{
	int a,b;
	scanf("%d,%d",&a,&b);
	start_num(max(a,b));	//������������Ϊ��һ����������ʱ�Ĳ���������x�������治��Ҫ�ֺ�
}
*/




/*ֻ��return���ĺ���*/
#include <stdio.h>
int max(int a,int b)
{
	return (a>b?a:b);
}

void main()
{
	int a,b;
	scanf("%d,%d",&a,&b);
	printf("%d\n",max(a,b));

}