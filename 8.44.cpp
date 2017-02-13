#include<stdio.h>
int main()
{
	int sayi1,sayi2,kalan;
	
	printf("Sayilari sirasiyla giriniz: ");
	scanf("%d %d",&sayi1,&sayi2);
	
	while(1)
	{
		kalan=sayi1%sayi2;
		if(kalan==0)
		{
			printf("Oklit yontemi ile obeb = %d",sayi2);
			break;
		}
		sayi1=sayi2;
		sayi2=kalan;
	}
}
