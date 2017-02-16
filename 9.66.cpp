#include <stdio.h>
#include <math.h>

int zincir(int);

int main()
{
	printf("% d \n", zincir(19) );
	printf("% d \n", zincir(32) );
	getchar();
}
int zincir(int sayi)
{
	int tersi,sayac=2;
	
	while(1)
	{
		tersi=(sayi%10)*10+sayi/10;
		if(fabs(sayi-tersi)<10){
			break;
		}
		else{
			sayi=fabs(sayi-tersi);
			sayac++;
		}  
	}
	return sayac;
}
