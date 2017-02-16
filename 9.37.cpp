#include<stdio.h>
#include<math.h>
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
int terscevir(int sayi)
{
	int i,a,top=0,j;
	i=basamakbulma(sayi)-1;
	for(j=i;j>=0;j--)
	{
		a=sayi%10;
		top=top+a*pow(10,j);
		sayi=sayi/10;
	}
	return top;
}
int main( void )
{
	int sayi,a;
	printf("sayiyi giriniz: ");
	scanf("%d",&sayi);
	a=terscevir(sayi);
	printf("%d\n",a);
	printf("sayiniz %d basamaklidir",basamakbulma(sayi));
	return 0;
}
