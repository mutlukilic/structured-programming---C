#include<stdio.h>

int main( void )
{
	int i,top,j,mukemmel;
	printf("Aranilan sayi : ");
	for(i=10000;i>=2;i--)
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
			printf("%d",mukemmel);
			break;
		}
		else
		{
			continue;
		}
	}
	return 0;
}
