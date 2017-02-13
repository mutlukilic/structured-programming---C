#include <stdio.h>

int main()
{
	char secim;
	int otosayisi,kisisayisi;
	float doluluk;
	
	printf("Tur turunu giriniz (I,i: Sehirici, D,d:Sehir Disi) : ");
	scanf("%c",&secim);
	printf("Tura kaç kişi katilacak?: ");scanf("%d",&kisisayisi);
	printf("-------------------------\n");
	
	if(kisisayisi % 46 == 0){
		otosayisi = kisisayisi / 46;
	}
	else{
		otosayisi = kisisayisi / 46 + 1;
	}
	doluluk = (float) kisisayisi / (otosayisi*46);
	printf("Bu tur icin %d adet otobuse ihtiyac var.\n",otosayisi);
	printf("Turdaki bos koltuk sayisi :  %d\n",otosayisi*46-kisisayisi);
	printf("Turun doluluk orani       : %.2f\n",doluluk);
	printf("Karlilik derecesi         : ");
	switch(secim){
		case 'I':
		case 'i':
			if(doluluk < 0.60){
				printf("Zarar");
			}
			else if(doluluk >= 0.60 && doluluk <= 0.90){
				printf("Karli");
			}
			else{
				printf("Cok karli");
			}
			break;
		case 'D':
		case 'd':
			if(doluluk < 0.70){
				printf("Zarar");
			}
			else if(doluluk >= 0.70 && doluluk <= 0.90){
				printf("Karli");
			}
			else{
				printf("Cok karli");
			}
			break;
		default:
			printf("Secimi dogru giriniz");
			break;
	}
	return 0;
}
