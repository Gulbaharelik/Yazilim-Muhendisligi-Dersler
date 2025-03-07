#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	printf("Bir zar atan ve zar 6 gelmeden once kac kez atildigini ekrana yazdiran C programi\n\n");
	
	// Deðer tanýmlamalarý yapýldý
	int Sayi;
	int g=0; // Burada g deneme sayýsýný belirtir
	srand(time(NULL)); //srand deðeri burada her seferinde farklý seçimler yapmamýzý saðlýyor. time fonksiyonu ise aradaki saniyeyi döndürür.
	
	//Burada do içerisinden gerekli iþlem yazdýrmalarýný yaptýk.
	do
	{	
        g++; //Buradaki artýrma iþlemi deneme deðerinin ne kadar artýðýný belli eder.
		Sayi=rand()%6+1; //rand hangi aralýkta sayýlarýn üreteceðini söylüyo.
		printf("%d. deneme %d \n",g,Sayi);	// Burada yazdýrma iþlemi yapýldý
    }
	 while (Sayi<6); // Ne zaman döngünün biteceðini belli eder.
	 printf("%d. denemeden sonra 6 rakami gelmistir.",g); // Burada sorunun bizden istediðini yazdýrdýk.
	 
	return 0;
}
