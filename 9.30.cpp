#include<stdio.h>
#include <math.h>
int asaliBul(int,char);
int main()
{
	printf("\n%d",asaliBul(15,'b'));
	printf("\n%d",asaliBul(12,'k'));
	return 0;
}
int asaliBul(int sayi,char secim)
{
	int isAsal,j;
	
	while(1)
	{
		if(secim == 'b'){
			sayi++;
		}
		if(secim == 'k'){
			sayi--;
		}
		isAsal = 1;
		for(j=2;j<=sqrt(sayi);j++){
			if(sayi%j == 0){
				isAsal = 0;
				break;
			}
		}
		if(isAsal == 1){
			return sayi;
			break;
		}
	}
}
