/*  
#include <stdio.h>
int main()
{
    int a;
    double b;
//    a = 3*4+-2;   
    b = 3.14*2;
    printf("a=%d\nb = %f\n",a = 3*4+-2,3.444); //運算式a = 3*4+-2
}
*/

/*  d格式符：用來輸出一個有符號的十進位整數
%10d  域寬
%ld   長整型   
%lld  雙長整形  VC6中所使用的編譯器是C90標準的，而 long long 型是在C99中新加入的
*/
/*
#include <stdio.h>
main()
{
    printf("a=%d\nb= %ld\n",74,-2134748); 

}
*/



/*  c格式符：用來輸出一個字元   
%10d  域寬

#include <stdio.h>
int main()
{
    char a = 's';       //int a = 337;   
    int b = 115;
    printf("a=%d\n",a); 
    printf("a=%10c\n",a);

    printf("a=%c\n",b); //可以直接強制轉換，將十進制轉成char
}
*/



/*s格式符：用來輸出字串符 

#include <stdio.h>
main()
{
    printf("%s\n","電腦c語言程式設計"); 
}
*/


/*f格式符：基本型，用%f
實數中的整數部分全部輸出，小數部分預設輸出6位元
指定數據寬度和小數位數，用%m.nf;對最後一位元資料進行四捨五入
輸出的資料向左對齊，用%-m.nf

#include <stdio.h>
int main()
{
    float a = 10000.0,b = 3.0;      //超出範圍情況
    printf("%20.10f\n",a/b);         //20.8
    printf("%-20.8f\n",a/b); 
}
*/


/*e格式符：以指數形式輸出
預設數位部分的小數位數為6位元，指數部分占5位元
E輸出E形式

#include <stdio.h>
int main()
{
    printf("%e",12.344443625); 
    printf(" = 1.234444 x 10\n"); 
    printf("%e\n",12.456); 
}
    */



/*其他格式符

#include <stdio.h>
int main()
{
//  printf("%i\n",12); //與d相同
//  printf("%X\n",12);
    double a = 12.34;
    printf("%f  %e   %g\n",a,a,a);
}
    */



/*scanf函數
#include <stdio.h>
int main()
{
    int a;                  //a= 輸入的資訊
    scanf("%d",&a);         //scanf函數中的格式控制後面應當是變數位址，而不是變數名。
    printf("a = %d\n",a);
}
*/



/*scanf函數

#include <stdio.h>
int main()
{
    float a,b,c;                            //不能定義錯了變數類型                    
    scanf("%f%f%f",&a,&b,&c);       //普通字元：需要在輸入時原樣輸入的字元  
    printf("number = %f %f %f\n",a,b,c);
}
*/


/*scanf函數
空格字元和轉義字元中的字元都作為有效字元輸入  
#include <stdio.h>
int main()
{
    char a,b,c;                 
    scanf("%c%c%c",&a,&b,&c);       //例如回車回車x
    printf("您輸入的字元是：%c %c %c\n",a,b,c);
}
*/

/*scanf函數
在輸入數值資料時，如果輸入空格、回車、Tab鍵或遇到非法字元（不屬於數位的字元），認為該資料結束 
#include <stdio.h>
main()
{
    int a;
    char b;
    float c;
    scanf("%d%c%f",&a,&b,&c);       //例如123e56o.39
    printf("您輸入的字元是：%d %c %f\n",a,b,c);
}

*/

/* putchar  
#include <stdio.h>
void main()
{
    int a = 66,b = 79,c = 89;   //char a = 'B',b = 'O',c = 'Y'; //
    putchar(a);  //直接輸出66的char
    putchar(b);  //直接輸出79的char
    putchar(c);  //直接輸出89的char
    putchar('\n');  //也可以輸出螢幕控制字元
}
*/



/* getchar  
注：也可以獲取控制字元，例如輸入B回車o回車
    可以賦給一個變數，也可以直接作為運算式的一部分。

#include <stdio.h>
void main()
{
    char a ,b ,c;   
    a = getchar();      //putchar
    b = getchar();
    c = getchar();
    printf("獲取的內容為：%c %c %c\n",a,b,c);  //也可以用putchar輸出
//  printf("獲取的內容為：%c %c %c\n",a,b,getchar());
}
*/
#include <stdio.h>
int main()
{
    char a ,b ,c;   
    a = getchar();      //putchar
    b = getchar();
    c = getchar();
    
    printf("獲取的內容為：%c %c %c\n",a,b,c);  //也可以用putchar輸出
//  printf("獲取的內容為：%c %c %c\n",a,b,getchar());
}

/*
任務：輸入一個大寫字母，輸出對應的小寫字母

#include <stdio.h>
main()
{

}*/

