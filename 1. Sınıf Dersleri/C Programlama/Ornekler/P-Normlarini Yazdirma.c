#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	printf("Kullanicidan g ve K sayilarini alan ve p-normlarini yazdiran bir C programi\n\n");
	
	// Burada de�er tan�mlamalar� yapt�k
	int K,a;// a de�eri burada K 'n�n d�ng� tan�mlamas� i�in kullan�ld�
	int g;
	
	// Burada de�erleri klavyeden girdi yapt�k
	printf("Lutfen bir K degeri giriniz:");
	scanf("%d",&K);
	printf("Lutfen bir g degeri giriniz:");
	scanf("%d",&g);
	
	// D�ng�y� burada K say�s�n� tan�mlamak ve d�ng�ye sokmak i�in kulland�k
	for(a=1;a<=K;a++)
	{	
     	printf("(|X%d|^%d)^1/%d+",a,g,g); // Printf yard�m�yla istenen de�er yazd�rmas�n� yapt�k
	}
	printf("\b)"); // 	Burada  \b ��kt�y� bir karakter silmesi i�in kulland�m 
	
	return 0;
}
