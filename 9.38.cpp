#include<stdio.h>
int icindeVarMi(int,int);
int main()
{
	printf("\n%d",icindeVarMi(54572,3));
	printf("\n%d",icindeVarMi(646,4));
	return 0;
}
int icindeVarMi(int sayi,int aranan)
{
	int i,a;
	
	for(i=0;sayi!=0;i++)
	{
		a=sayi%10;
		if(a==aranan)
		{
			return 1;
		}
		sayi/=10;
	}
	return 0;
}
