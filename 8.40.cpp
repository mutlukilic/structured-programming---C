#include<stdio.h>
int main( void )
{
	int j,i,toplam,tekbolsayi;
	
	
	printf("Aranilan sayi : ");
	for(i=9999;i>999;i--)
	{
		toplam=0;
		if(i%2!=0)
		{
			for(j=1;j<=i/2;j+=2)
			{
				if(i%j==0)
				{
					toplam=toplam+j;
				}
				else
				{
					continue;
				}
			}
		}
		else
		{
			continue;
		}
		if(i<toplam)
		{
			tekbolsayi=i;
			printf("%d",tekbolsayi);
			break;
		}
	}
	return 0;
}
