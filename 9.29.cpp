#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

void ertelemeMesajiYaz(int);

int main()
{
	ertelemeMesajiYaz( 1 );
	ertelemeMesajiYaz( 6 );
	return 0;
}
void ertelemeMesajiYaz(int gun)
{
	int baska;
	
	baska=1+rand()%7;
	while(gun==baska){
		srand(time(NULL));
		baska=1+rand()%7;
	}
	if(baska==1){
		printf("Pazar  ");
	}
	if(baska==2){
		printf("Pazartesi  ");
	}
	if(baska==3){
		printf("Sali  ");
	}
	if(baska==4){
		printf("Carsamba  ");
	}
	if(baska==5){
		printf("Persembe  ");
	}
	if(baska==6){
		printf("Cuma  ");
	}
	if(baska==7){
		printf("Cumartesi  ");
	}
	printf("gunu teslimat yapilacak\n");
}
