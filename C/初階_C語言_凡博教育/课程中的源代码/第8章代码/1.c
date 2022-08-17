#include<stdio.h>


/*
void main()
{
	char name[30];
	int age; 
	char sex;
	int student_number;
		
	char name_2[30];
	int age_2; 
	char sex_2;
	int student_number_2;

	//输入学生填写信息到
	printf("请输入学生的姓名 年龄 性别 学号:");
	scanf("%s %d %c %d",name,&age,&sex,&student_number);
	printf("参加比赛的学生有%s\t年龄：%d\t性别：%c\t学号：%d\n",name,age,sex,student_number);
	
	printf("请输入学生的姓名 年龄 性别 学号:");
	scanf("%s %d %c %d",name_2,&age_2,&sex_2,&student_number_2);
	printf("参加比赛的学生有%s\t年龄：%d\t性别：%c\t学号：%d\n",name_2,age_2,sex_2,student_number_2);
}
*/

/**/
struct test
{
	char name[30];
	int age; 
	char sex;
	int student_number; 
};

void main()
{
	struct test lisi , zhaoliu;  

	printf("请输入学生的姓名 年龄 性别 学号:");
	scanf("%s %d %c %d",lisi.name,&lisi.age,&lisi.sex,&lisi.student_number);
	printf("参加比赛的学生有%s\t年龄：%d\t性别：%c\t学号：%d\n",lisi.name,lisi.age,lisi.sex,lisi.student_number);
	printf("请输入学生的姓名 年龄 性别 学号:");
	scanf("%s %d %c %d",zhaoliu.name,&zhaoliu.age,&zhaoliu.sex,&zhaoliu.student_number);
	printf("参加比赛的学生有%s\t年龄：%d\t性别：%c\t学号：%d\n",zhaoliu.name,zhaoliu.age,zhaoliu.sex,zhaoliu.student_number);
}




/*
struct score
{
	int shuxue;
	int yuwen;
	int zhengzhi;
	char tiyu;
}

struct test
{
	char name[30];
	int age; 
	char sex;
	int student_number; 
	struct score gaokao;
};
*/

/*2、在创建类型同时定义
void main()
{
	struct test
	{
		char name[30];
		int age; 
		char sex;
		int student_number; 
	}lisi,zhaoliu;
	printf("请输入学生的姓名 年龄 性别 学号:");
	scanf("%s %d %c %d",lisi.name,&lisi.age,&lisi.sex,&lisi.student_number);
	printf("参加比赛的学生有%s\t年龄：%d\t性别：%c\t学号：%d\n",lisi.name,lisi.age,lisi.sex,lisi.student_number);
		
	printf("请输入学生的姓名 年龄 性别 学号:");
	scanf("%s %d %c %d",zhaoliu.name,&zhaoliu.age,&zhaoliu.sex,&zhaoliu.student_number);
	printf("参加比赛的学生有%s\t年龄：%d\t性别：%c\t学号：%d\n",zhaoliu.name,zhaoliu.age,zhaoliu.sex,zhaoliu.student_number);
}*/


/*3、不指定结构体名而直接定义*/
void main()
{
	struct 
	{
		char name[30];
		int age; 
		char sex;
		int student_number; 
	}lisi,zhaoliu;

	printf("请输入学生的姓名 年龄 性别 学号:");
	scanf("%s %d %c %d",lisi.name,&lisi.age,&lisi.sex,&lisi.student_number);
	printf("参加比赛的学生有%s\t年龄：%d\t性别：%c\t学号：%d\n",lisi.name,lisi.age,lisi.sex,lisi.student_number);
		
	printf("请输入学生的姓名 年龄 性别 学号:");
	scanf("%s %d %c %d",zhaoliu.name,&zhaoliu.age,&zhaoliu.sex,&zhaoliu.student_number);
	printf("参加比赛的学生有%s\t年龄：%d\t性别：%c\t学号：%d\n",zhaoliu.name,zhaoliu.age,zhaoliu.sex,zhaoliu.student_number);
}



/*
struct score
{
	int shuxue;
	int yuwen;
	int zhengzhi;
	char tiyu;
}

struct test
{
	char name[30];
	int age; 
	char sex;
	int student_number; 
	struct score gaokao;
};

void main()
{
	struct test lisi;
	lisi.gaokao.tiyu = 'A';
	printf("体育分数为：%c\n",lisi.gaokao.tiyu);
}*/