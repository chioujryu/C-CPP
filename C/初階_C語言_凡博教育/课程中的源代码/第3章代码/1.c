/*�ж��Ƿ�Ϊ��ͯ1	
#include <stdio.h>
void main()
{
	int num_age;
	scanf("%d",&num_age);
	if(num_age <12) printf("it is kid\n");
	printf("finished\n");
}
*/


/*�ж��Ƿ�Ϊ��ͯ2	
#include <stdio.h>
void main()
{
	int num_age;
	scanf("%d",&num_age);
	if(num_age <12) {
		printf("it is kid\n");
	}
	else if(num_age >12){
		printf("it is not kid\n");
	}
	printf("finish\n");
}
*/

/*	ͨ���Ƚϣ����������洢��a�����У���С�����洢��b������

#include <stdio.h>
void main()
{
	int a,b,t;
	scanf("%d",&a);
	scanf("%d",&b);
	if (a<b)
	{	
		t=a;  
		a=b;
		b=t;
	}
	printf("a=%d,b=%d",a,b);
}
*/   



/*�ж��Ƿ�Ϊ��ͯ3	
#include <stdio.h>
void main()
{
	int num_age;
	scanf("%d",&num_age);
	if(num_age <= 12) printf("it is kid\n");  //�@�ǃ�ͯ
	else
		if(12<num_age && num_age<= 18)	printf("it is teenager\n"); //�@��������
		else
			if(18<num_age&& num_age <= 30) printf("it is old teenager\n"); //�@������
			else
				if (30 < num_age&& num_age <= 60)	printf("it is man\n"); //�@�ǳ�����
				else printf("it is old man\n"); //�@������
	printf("finished\n");
}
*/

