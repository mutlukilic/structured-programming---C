#include<stdio.h>
int asalyaz(int,int);
int main( void )
{
	int bas,son;
	printf("bas ve son degerlerini giriniz: ");
	scanf("%d %d",&bas,&son);
	printf("Sinir degerleri icindeki asal sayilar\n");
	asalyaz(bas,son);
	return 0;
}
int asalyaz(int bas,int son)
{
	int i,j,m;
	
	for(i=bas;i<=son;i++)
	{
		m=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				m=0;
				continue;
			}
		}
		if(m==1)
		{
			printf("%d,",i);
		}
	}
}
