#include <stdio.h>
int main ( void )
{
	int h,day=0;
	printf("�п�J���������檺���סG");
	//your code
	scanf("%d",&h);
	do{ day++;
		if((h=h-5)>0)
			h=h+2;
	  }while(h>0);
    printf("%d�ѥi���쳻��",day);
}
