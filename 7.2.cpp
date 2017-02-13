#include<stdio.h>
int main( void )
{
	float ales,ing,mezuniyet,siralama;
	printf("puanlari giriniz: ");
	scanf("%f %f %f ",&ales,&ing,&mezuniyet);
	siralama=ales*0.5+ing*0.25+mezuniyet*0.25;
	printf("Siralama puaniniz %.2f\n",siralama);
	if( siralama>=60 )
	{
		printf("siralamaya girebilir.");
	}
	else
	{
		printf("siralamaya giremez.");
	}
	return 0;
}
