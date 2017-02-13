#include <stdio.h>

int main()
{
	int n;
	float top,i;
	
	printf("n degerini giriniz: ");scanf("%d",&n);
	for(i=1;i<=n;i++){
		top+=(i+1)/i;
	}
	printf("Sonuc = %.2f",top);
	getchar();
}
