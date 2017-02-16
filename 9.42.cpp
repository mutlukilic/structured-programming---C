#include<stdio.h>
int buyuktarih(int,int,int,int,int,int);
int main()
{
	int gun1,ay1,yil1,gun2,ay2,yil2;
	
	printf("Birinci tarihi giriniz: ");
	scanf("%d %d %d",&gun1,&ay1,&yil1);
	printf("İkinci tarihi giriniz: ");
	scanf("%d %d %d",&gun2,&ay2,&yil2);
	printf("-----------------------------------\n");
	buyuktarih(gun1,ay1,yil1,gun2,ay2,yil2);
	return 0;
}
int buyuktarih(int gun1,int ay1,int yil1,int gun2,int ay2,int yil2)
{
	int enbgun,enbay,enbyil;
	enbgun=gun1;
	enbay=ay1;
	enbyil=yil1;
	if(yil2>yil1)
	{
		enbgun=gun2;
		enbay=ay2;
		enbyil=yil2;
	}
	else
	{
		if(yil2==yil1 && ay2>ay1)
		{
			enbgun=gun2;
			enbay=ay2;
			enbyil=yil2;
		}
		else
		{
			if(ay2==ay1 && yil2==yil1 && gun2>gun1)
			{
				enbgun=gun2;
				enbay=ay2;
				enbyil=yil2;
			}
		}
	}
	printf("%d/%d/%d",enbgun,enbay,enbyil);
}
