#include <stdio.h>


/*创建共用体类型
union info
{
	int a;
	char b;
	float c;
};

void main()
{
	union info x;				//占内存4字节

	x.a = 100;
	printf("%d\t%c\t%f\n",x.a,x.b,x.c);
}*/

/*共用体初始化时，只能存储一个数据，不能同时存储多个数据
void main()
{
	union info
	{	int a;
		char b;
		float c;
	}x={100};				
	
	x.c = 3.14f;				
	x.b = 'y';										//ASCII码后部分是成员c遗留的

	printf("%d\t%c\t%f\n",x.a,x.b,x.c);
	printf("%d\t%d\t%d\n",&x.a,&x.b,&x.c);
}*/






/*填写公司员工信息*/
struct	info											//一般配合struct，上节课的链表一般在处理大型数据的时候使用
{	char name[20];
	int age;
	char work;
	union
	{	int gzsc;
		char xueli[10];		
	}fen;
};

void main()
{
	struct info a[2];
	int i;
	for(i = 0; i <2; ++i)
	{
		printf("请填写入职信息：姓名 年龄 职务[c表示程序员，s表示设计师]\n");
		scanf("%s %d %c",a[i].name,&a[i].age,&a[i].work);
		if(a[i].work == 's')
		{	printf("请输入您工作时长：");
			scanf("%d",&a[i].fen.gzsc);		
		}
		else
		{	printf("请输入您的学历：");
			scanf("%s",a[i].fen.xueli);		
		}
	}
	for(i = 0; i <2 ; ++i)
	{
		if(a[i].work == 's') printf("姓名:%s\t年龄%d\t职务:%c\t工作时长:%d\n",a[i].name,a[i].age,a[i].work,a[i].fen.gzsc);
		else 	printf("姓名:%s\t年龄%d\t职务:%c\t学历:%s\n",a[i].name,a[i].age,a[i].work,a[i].fen.xueli);
	}
}