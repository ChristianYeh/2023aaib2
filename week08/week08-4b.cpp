#include <stdio.h>
int main ( void )
{
	int h,day=0;
	printf("請輸入蝸牛欲爬行的高度：");
	//your code
	scanf("%d",&h);
	do{ day++;
		if((h=h-5)>0)
			h=h+2;
	  }while(h>0);
    printf("%d天可爬到頂端",day);
}
