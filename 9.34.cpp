#include<stdio.h>
#include<math.h>
int kuvvet(int,int);
int main()
{
	int taban,kuvet;
	
	printf("Taban ve kuvvet degerini giriniz: ");
	scanf("%d %d",&taban,&kuvet);
	printf("Sonuc= %d",kuvvet(taban,kuvet));
	
	return 0;
}
int kuvvet(int taban,int kuvet)
{
	int a;
	a=pow(taban,kuvet);
	return a;
}
