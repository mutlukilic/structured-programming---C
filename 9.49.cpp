#include<stdio.h>
#include<math.h>
int enBuyukMulayim(int);
int main()
{
	printf("%d\n",enBuyukMulayim(3));
	printf("%d\n",enBuyukMulayim(4));
	return 0;
}
int enBuyukMulayim(int basamak)
{
	int i,top,carpim,j,a,x,yedek;
	
	for(i=pow(10,(basamak));i>pow(10,(basamak-1));i--)
	{
		carpim=1;
		top=0;
		a=i;
		for(j=1;j<=basamak;j++)                                            
		{
			x=a%10;
			carpim=carpim*x;
			top+=x;
			a=a/10;
		}
		if(top*carpim==i)
		{
			return i;
			break;
		}
	}
	return 0;
}
