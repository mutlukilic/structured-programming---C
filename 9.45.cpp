#include<stdio.h>
int enbuyuk(int);
int main()
{
	printf("\n%d",enbuyuk(54571));
	printf("\n%d",enbuyuk(33));
	return 0;
}
int enbuyuk(int sayi)
{
	int i,max=0,a;
	
	for(i=0;sayi!=0;i++)
	{
		a=sayi%10;
		if(a>max)
		{
			max=a;
		}
		sayi/=10;
	}
	return max;
}
