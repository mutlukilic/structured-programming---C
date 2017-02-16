#include<stdio.h>
#include<math.h>
int enBuyukKupunuDolduran(int);
int main()
{
	printf("%d\n",enBuyukKupunuDolduran(3));
	printf("%d\n",enBuyukKupunuDolduran(4));
	return 0;
}
int enBuyukKupunuDolduran(int basamak)
{
	int i,a,x,j,top;
	
	for(i=pow(10,(basamak))-1;i>=pow(10,(basamak-1));i--)
	{
		a=i;
		top=0;
		for(j=1;j<=basamak;j++)
		{
			x=a%10;
			top+=x;
			a/=10;
		}
		if(pow(top,3)==i)
		{
			return i;
			break;
		}
	}
	return 0;
}
