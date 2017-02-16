#include <stdio.h>

int obeb(int,int);

int main()
{
	printf("%d",obeb(24,32));
	return 0;
}
int obeb(int sayi1,int sayi2)
{
	if(sayi1==sayi2){
		return sayi1;
	}
	
	while(sayi1!=sayi2)
	{
		if(sayi1 > sayi2){
			sayi1=sayi1-sayi2;
		}
		else{
			sayi2=sayi2-sayi1;
		}
	}
	return sayi1;
}
