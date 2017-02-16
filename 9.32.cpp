#include<stdio.h>
int permutasyon(int,int);
int main()
{
	int n,r;
	
	printf("n ve r degerlerini giriniz   :  ");
	scanf("%d %d",&n,&r);
	printf("------------------------------\n");
	printf("P(n,r) = %d",permutasyon(n,r));
	
	return 0;
}
int permutasyon(int n,int r)
{
	int i,fak1=1;
	
	for(i=n;i>(n-r);i--)
	{
		fak1=fak1*i;
	}
	
	return fak1;
}
