#include<stdio.h>
#include<math.h>
int main( void )
{
	int i,j,m;
	
	printf("1 ile 20 arasindaki asal sayilar\n");
	printf("----------------------------------\n");
	for(i=1;i<=20;i++)
	{
		m=1;
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				m=0;
			}
		}
		if(m==1)
		{
			printf("%d,",i);
		}
	}
	return 0;
}
