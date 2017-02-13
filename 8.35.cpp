#include<stdio.h>
#include <stdlib.h>
int main( void )
{
	int a,b,c,sayi,ozelsayi;
	int k=0;
	printf("Aranilan sayilar : ");
	for(a=1;a<10;a++)
	{
		for(b=0;b<10;b++)
		{
			for(c=0;c<10;c++)
			{
				sayi=a*100+b*10+c;
				ozelsayi=(a*b*c)*(a+b+c);
				if(sayi==ozelsayi)
				{
					printf("%d, ",sayi);
					k++;
				}
			}
		}
	}
	printf("\n");
	printf("Bu ozellige sahip %d adet uc basamakli sayi vardir.",k);
	system("pause");
}
