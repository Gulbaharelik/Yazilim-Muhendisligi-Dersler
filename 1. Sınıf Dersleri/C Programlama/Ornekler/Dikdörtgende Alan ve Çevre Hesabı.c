#include <stdio.h>
#include <stdlib.h>

// 1-- K�sa kenar uzunlu�u 10 cm ,uzun kenar uzunlu�u 15 cm olan dikd�rtgenin alan�n� ve �evresini hesaplayan C kodunu yaz�n�z.

int main(int argc, char *argv[]) {
	int kisakenar;
	int uzunkenar;
	int alanuzunlugu;
	int cevreuzunlugu;
	
	kisakenar= 10 ;
	uzunkenar= 15 ;
	
	alanuzunlugu= (kisakenar*uzunkenar);
	cevreuzunlugu= 2*(kisakenar+uzunkenar);
	
	prinft("cevre uzunlugu\n");
	printf("alan uzunlugu\n");
	
/*	

    int kisaKenar, uzunKenar ;
	int alan, cevre;
	
	printf("kisaKenar giriniz:");
	scanf("%d",&kisaKenar);
	printf("uzunKenar giriniz:");
	scanf("%d", &uzunKenar);
	
	alan = kisaKenar * uzunKenar;
	cevre = (kisaKenar + uzunKenar)*2;
	
    printf("Dikdortgenin alani : %d\n", alan);
    printf("Dikdortgenin cevresi : %d\n", cevre);
	 
*/
	
	return 0;
}
