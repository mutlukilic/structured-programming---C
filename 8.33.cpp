#include<stdio.h>
#include<math.h>
int main( void )
{
	int a,b,c,d,sayi1,sayi2,sayi;
	int k=0;
	printf("Aranilan sayilar : ");
	for(a=1;a<10;a++)
	{
		for(b=0;b<10;b++)
		{
			for(c=0;c<10;c++)
			{
				for(d=0;d<10;d++)
				{
					sayi1=((a*10)+b)*((c*10)+d);
					sayi2=((b*10)+a)*((d*10)+c);
					if(sayi1==sayi2)
					{
						sayi=a*1000+b*100+c*10+d;
						printf("%d\t",sayi);
						k++;
					}
				}
			}
		}
	}
	printf("\n");
	printf("Toplam %d adet",k);
	return 0;
}
