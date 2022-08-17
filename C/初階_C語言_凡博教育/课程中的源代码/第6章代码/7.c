/*传递数组元素
输出10个数字中最大的元素

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
	printf("最大的数是%d\n",b);
}

*/

/*传递一维数组名
求10个数值的平均值

#include<stdio.h>	
float ave(float a[])	//主调函数和被调函数都应该分别定义数组，且数组类型一致
{						//系统不检查形参数组的大小，a[]也可以的。
	int i;				//将实参数组的首元素的地址传递给形参，因此a和num使用相同的内存地址
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
	printf("平均值是%f\n",average);
}
*/





/*传递多维数组名

#include<stdio.h>
int max(int a[][4])	//编译器不检查第一维的大小
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