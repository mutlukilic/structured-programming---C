#include<stdio.h>
int mukemmelsayimi(int);
int main( void )
{
	int sayi;
	printf("sayiyi giriniz: ");
	scanf("%d",&sayi);
	printf("%d",mukemmelsayimi(sayi));
	return 0;
}
int mukemmelsayimi(int sayi)
{
	int i,top=0,m;
	for(i=1;i<=sayi/2;i++)
	{
		if( sayi%i==0 )
		{
			top=top+i;
		}
		else
		{
			continue;
		}
	}
	if(sayi==top)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
