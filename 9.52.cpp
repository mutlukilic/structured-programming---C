#include<stdio.h>
int rakamtopla(int);
int main()
{
	
	int sayi;
	printf("Sayiyi giriniz: ");
	scanf("%d",&sayi);
	printf("Rakamlarin toplami= %d",rakamtopla(sayi));
	return 0;
}
int rakamtopla(int sayi)
{
	int top=0,a;
	while(sayi!=0)
	{
		a=sayi%10;
		top=top+a;
		sayi/=10;
	}
	return top;
}
