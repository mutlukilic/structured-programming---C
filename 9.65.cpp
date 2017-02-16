#include <stdio.h>

int harshadSay(int,int);

int main()
{
	printf("%d\n",harshadSay(121,141));
	printf("%d\n",harshadSay(21,41));
	return 0;
}
int harshadSay(int bas,int son)
{
	int i,sayac=0,sayi;
	int top=0,x;
	
	for(i=bas;i<=son;i++)
	{
		top=0;
		sayi=i;
		while(sayi!=0)
		{
			x = sayi%10;
			top += x;
			sayi /= 10;
		}
		if(i%top==0){
			sayac++;
		}
	}
	return sayac;
}
