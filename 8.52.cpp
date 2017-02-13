#include <stdio.h>

int main()
{
	float a=1,yeni;
	for(int i=1;i<10;i++)
	{
		yeni=(1+(1/a));
		a=yeni;
	}
	printf("Sonuc = %.2f",a);
	getchar();
}
