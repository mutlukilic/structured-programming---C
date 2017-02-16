#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void renkMesajiYaz(int);

int main()
{
	renkMesajiYaz( 0 );
	renkMesajiYaz( 2 );
	return 0;
}
void renkMesajiYaz(int kod)
{
	int baska,i;
	
	baska=1+rand()%10;
	srand(time(NULL));
	while(baska==kod){
		baska=rand()%10;
	}
	printf("Hic begenmedim!\n");
	if(baska==0){
		printf("Siyah ");
	}
	if(baska==1){
		printf("Kahverengi ");
	}
	if(baska==2){
		printf("Kirmizi ");
	}
	if(baska==3){
		printf("Turuncu ");
	}
	if(baska==4){
		printf("Sari ");
	}
	if(baska==5){
		printf("Yesil ");
	}
	if(baska==6){
		printf("Mavi ");
	}
	if(baska==7){
		printf("Mor ");
	}
	if(baska==8){
		printf("Gri ");
	}
	if(baska==9){
		printf("Beyaz ");
	}
	printf("renge boyayin\n");
}
