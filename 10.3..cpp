#include<stdio.h>
int ikilik(int);
int main( void )
{
	int sayi;
	printf("sayiyi giriniz: ");
	scanf("%d",&sayi);
	ikilik(sayi);
	return 0;
}
int ikilik(int sayi)
{
	if( sayi>0 )
	{
		ikilik(sayi/2);
		printf("%d",sayi%2);
	}
}
