#include <stdio.h>

// Toplam sayısının hesaplanması

int main() {

	int toplam;
	float ortalama;
	
	toplam=41;
	
	printf("Toplam sayisinin degerini giriniz:");
	scanf("%d", &toplam);
	
	ortalama = toplam/4.0;
	
	printf("Ortalama sonucu	: %.2f  %d", ortalama, toplam );
	return 0;

}
