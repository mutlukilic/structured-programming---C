#include<stdio.h>
#include<math.h>
int main( void )
{
	/*int b,c,sayi,kupu;
	int k=0;
	printf("Aranilan sayilar : ");
	for(int a=1;a<10;a++)
	{
		for(b=0;b<10;b++)
		{
			for(c=0;c<10;c++)
			{
				sayi=a*100+b*10+c;
				kupu=pow(a,3)+pow(b,3)+pow(c,3);
				if(sayi==kupu)
				{
					printf("%d, ",sayi);
					k++;
				}
			}
		}
	}
	printf("\n");
	printf("Bu ozellige sahip %d adet uc basamakli sayi vardir.",k);
	return 0;*/
	int sayi = 2;
	int toplam,yedek,x;
	while(1){
		toplam = 0;
		yedek = sayi;
		while(yedek != 0){
			x = yedek%10;
			toplam += pow(x,5);
			yedek /= 10;
		}
		if(toplam == sayi){
			printf("Sayi = %d",sayi);
			break;
		}
		sayi++;
	}
}
