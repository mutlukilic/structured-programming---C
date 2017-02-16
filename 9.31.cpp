#include<stdio.h>
#include<math.h>
int daireselMi(int);
int basamakbulma(int);
int main()
{
	printf("1.satir= %d \n",daireselMi(102564));
	printf("2.satir= %d \n",daireselMi(123456));
	return 0;
}
int basamakbulma(int sayi)
{
	int basamak=0;
	while(sayi!=0)
	{
		sayi=sayi/10;
		basamak++;
	}
	return basamak;
}
int daireselMi(int sayi)
{
	int kalan,yenisayi,i,x;
	
	i=basamakbulma(sayi);
	kalan=sayi%10;
	yenisayi=kalan*sayi;
	x=pow(10,(i-1));
	if(sayi/10==yenisayi%x)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
