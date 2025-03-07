#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	printf("Kullanicidan g ve K sayilarini alan ve p-normlarini yazdiran bir C programi\n\n");
	
	// Burada deðer tanýmlamalarý yaptýk
	int K,a;// a deðeri burada K 'nýn döngü tanýmlamasý için kullanýldý
	int g;
	
	// Burada deðerleri klavyeden girdi yaptýk
	printf("Lutfen bir K degeri giriniz:");
	scanf("%d",&K);
	printf("Lutfen bir g degeri giriniz:");
	scanf("%d",&g);
	
	// Döngüyü burada K sayýsýný tanýmlamak ve döngüye sokmak için kullandýk
	for(a=1;a<=K;a++)
	{	
     	printf("(|X%d|^%d)^1/%d+",a,g,g); // Printf yardýmýyla istenen deðer yazdýrmasýný yaptýk
	}
	printf("\b)"); // 	Burada  \b çýktýyý bir karakter silmesi için kullandým 
	
	return 0;
}
