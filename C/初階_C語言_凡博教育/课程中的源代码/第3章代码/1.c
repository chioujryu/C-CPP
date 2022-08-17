/*判断是否为儿童1	
#include <stdio.h>
void main()
{
	int num_age;
	scanf("%d",&num_age);
	if(num_age <12) printf("it is kid\n");
	printf("finished\n");
}
*/


/*判断是否为儿童2	
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

/*	通过比较，将最大的数存储到a变量中，将小的数存储到b变量中

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



/*判断是否为儿童3	
#include <stdio.h>
void main()
{
	int num_age;
	scanf("%d",&num_age);
	if(num_age <= 12) printf("it is kid\n");  //這是兒童
	else
		if(12<num_age && num_age<= 18)	printf("it is teenager\n"); //這是青少年
		else
			if(18<num_age&& num_age <= 30) printf("it is old teenager\n"); //這是青年
			else
				if (30 < num_age&& num_age <= 60)	printf("it is man\n"); //這是成年人
				else printf("it is old man\n"); //這是老人
	printf("finished\n");
}
*/

