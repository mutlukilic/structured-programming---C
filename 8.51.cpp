#include<stdio.h>
#include<math.h>
int main()
{
	int kuvvet=0,sayi;
	
	while(1)
	{
		sayi=pow(3,kuvvet);
		if(sayi>15000)
		{
			printf("15000 den buyuk ve 3'un kuvveti olan en kucuk tamsayi %d\nBu sayi 3'un %d'inci kuvvetidir",sayi,kuvvet);
			break;
		}
		kuvvet++;
	}
	return 0;
}
