#include <stdio.h>

int main()
{
	int mevcut,A=0,B=0,C=0,F=0;
	float vize,final;
	float ort,gnlort,top=0;
	
	printf("Sinif mevcudu kactir?:  ");scanf("%d",&mevcut);
	
	for(int i=1;i<=mevcut;i++)
	{
		printf("%d. ogrencinin vize ve finali:  ",i);
		scanf("%f %f",&vize,&final);
		ort=((vize*0.4)+(final*0.6))/25.0;
		if(ort<2){
			F++;
		}
		if(ort>=2 && ort<2.5){
			C++;
		}
		if(ort>=2.5 && ort<3.5){
			B++;
		}
		if(ort>3.5){
			A++;
		}
		top += ort;
	}
	gnlort=top/mevcut;
	printf("%d tane F,%d tane C,%d tane B,%d tane A vardir\n",F,C,B,A);
	printf("Genel ortalama %.2f dir",gnlort);
}
