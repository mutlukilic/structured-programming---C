#include<stdio.h>
int main( void )
{
	int i,k,j;
	printf("bir kenar uzunlugu giriniz: ");
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
