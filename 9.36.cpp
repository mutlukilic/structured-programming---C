#include<stdio.h>
int kombinasyon(int,int);
int main()
{
	int n,r;
	
	printf("n ve r degerlerini giriniz   :  ");
	scanf("%d %d",&n,&r);
	printf("------------------------------\n");
	printf("C(n,r) = %d",kombinasyon(n,r));
	
	return 0;
}
int kombinasyon(int n,int r)
{
	int i,fak1=1,fak2=1;
	
	for(i=n;i>(n-r);i--)
	{
		fak1=fak1*i;
	}
	for(i=1;i<=r;i++)
	{
		fak2=fak2*i;
	}
	
	return fak1/fak2;
}
