#include<stdio.h>

/*（1）创建的结构体类型之后，再定义结构体数组
struct test
{
	char name[30];
	int age; 
	char sex;
	int student_number; 
};

void main()
{				
	struct test class_five[10];	//定义了一个test类型的结构体数组，数组名为class_five，包含10个结构体  
	
}*/




/*（2）创建的结构体类型同时定义结构体数组：
void main()
{
	struct test
	{
		char name[30];
		int age; 
		char sex;
		int student_number; 
	}class_five[10];	//定义了一个test类型的结构体数组，数组名为class_five，包含10个结构体  
	

}*/


/*投票系统
为无忧村选举1名村长，预备村长有张三、李四、王五，村中一共10名村名*/
#include <string.h>
void main()
{
	struct piaoshu
	{
		char name[3];
		int number; 
	}ybcz[3] = {"zs",0,"ls",0,"ww",0};  // ybcz[0].name = "zs",ybcz[0].number =0;ybcz[1].name = "ls",ybcz[0].number =0;ybcz[0].name = "ww",ybcz[0].number =0;
	int i,j ;
	char name[3];
	for(i = 0;i <10;i++)
	{
		printf("请投票：");
		scanf("%s",name);
		for(j = 0 ; j <3; j++)
			if(strcmp(ybcz[j].name, name) == 0) ybcz[j].number++;
	}
	for(i = 0;i<3;i++)
	printf("村名:%s\t的票数是:%d\n",ybcz[i].name,ybcz[i].number);
}