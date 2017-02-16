#include <stdio.h>

int okek(int,int);

int main()
{
	printf("%d",okek(24,32));
	return 0;
}
int okek(int sayi1,int sayi2)
{
	int OKEK;
	
	if(sayi1==sayi2){
		return sayi1;
	}
	
	OKEK=sayi1*sayi2;
	while(sayi1!=sayi2)
	{
		if(sayi1 > sayi2){
			sayi1=sayi1-sayi2;
		}
		else{
			sayi2=sayi2-sayi1;
		}
	}
	return (OKEK/sayi1);
}
