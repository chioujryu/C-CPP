/*二 维 数 组
#include <stdio.h>
void main()
{
//	int stud[10][3];
	int i,j;
	int a[3][4] ={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

	a[3][4] = 119;
//	printf("%d\n",a[3][4]);
	for(i=0;i<3;++i)
		for(j=0;j<4;++j)
			printf("%d ",a[i][j]);
//	int b[3][4][5];
}*/




/*将一个二维数组行和列的元素互换，存到另一个二维数组中*/
#include <stdio.h>
void main()
{
	int a[2][3] ={{1,2,3},{4,5,6}};
	int b[3][2],i,j;
	/*
		1  4 
		2  5
		3  6
	*/
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%5d",a[i][j]);
			b[j][i] = a[i][j];	//b[0][1] =a[1][0] =4  b[1][1] =a[1][1]=5  b[2][1] = a[1][2]=6
		}
		printf("\n");
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=1;j++)	printf("%5d",b[i][j]);
		printf("\n");
	}
}

////
