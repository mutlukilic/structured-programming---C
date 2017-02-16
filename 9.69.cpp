#include <stdio.h>
#include <math.h>

int isNarsistNumber(int);

int main()
{
	printf("%d\n",isNarsistNumber(1634));
	printf("%d\n",isNarsistNumber(89));
	return 0;
}
int isNarsistNumber(int sayi)
{
	int i=sayi;
	int j,top=0,basamak=0,yedek,x;
	while(i!=0)
	{
		basamak++;
		i /= 10;
	}
	yedek=sayi;
	for(j=0;j<basamak;j++)
	{
		x = yedek%10;
		top += pow(x,basamak);
		yedek /= 10;
	}
	if(top == sayi){
		return 1;
	}
	else{
		return 0;
	}
}
