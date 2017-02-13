#include<stdio.h>

int main( void )
{
	int i,top,j,mukemmel;
	printf("1 ile 1000 arasindaki mukemmel sayilar\n");
	printf("---------------------------------\n");
	for(i=2;i<=1000;i++)
	{
		top=0;
		for(j=1;j<=i/2;j++)
		{
			if(i%j==0)
			{
				top=top+j;
			}
		}
		if(i==top)
		{
			mukemmel=i;
			printf("%d,",mukemmel);
		}
		else
		{
			continue;
		}
	}
	return 0;
}
