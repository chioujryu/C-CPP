#include<stdio.h>

/*��1�������Ľṹ������֮���ٶ���ṹ������
struct test
{
	char name[30];
	int age; 
	char sex;
	int student_number; 
};

void main()
{				
	struct test class_five[10];	//������һ��test���͵Ľṹ�����飬������Ϊclass_five������10���ṹ��  
	
}*/




/*��2�������Ľṹ������ͬʱ����ṹ�����飺
void main()
{
	struct test
	{
		char name[30];
		int age; 
		char sex;
		int student_number; 
	}class_five[10];	//������һ��test���͵Ľṹ�����飬������Ϊclass_five������10���ṹ��  
	

}*/


/*ͶƱϵͳ
Ϊ���Ǵ�ѡ��1���峤��Ԥ���峤�����������ġ����壬����һ��10������*/
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
		printf("��ͶƱ��");
		scanf("%s",name);
		for(j = 0 ; j <3; j++)
			if(strcmp(ybcz[j].name, name) == 0) ybcz[j].number++;
	}
	for(i = 0;i<3;i++)
	printf("����:%s\t��Ʊ����:%d\n",ybcz[i].name,ybcz[i].number);
}