#include <stdio.h>
#include <stdlib.h>


int main() {

/*	
	//puts ve gets cümlelerin tamamýný alýr ve diðer fonksiyonlar gibi yarým býrakmaz.
	char bilgi[40];
	printf("Bilgiyi Girin: ");
	gets(bilgi);
	printf("\n\n");
	puts(bilgi);
*/
/*
	char kitap[40];
	printf("Ad: ");
	scanf("%s",kitap);
	
	printf("%s",kitap);
	
	printf("\n");
	
	printf("%18s",kitap); // Buraada %10s yazmamýzýn nedeni 10 karakter boþluk býrakmak istememiz. 
	
	printf("\n");
	
	printf("%20.5s",kitap); // Burada noktadan sonra yazýlan karakter sayýsý kadar yazdýrýlýr.
	
	printf("\n");
	
	printf("%-20s",kitap); //Burada sola dayalý olarka karekter atadý yani gerekli kadar yazdýktan sonra saðda NULL karakterler býraktý.
*/
/*
    // Strlen : girilen karakter dizisinin uzunluðunu veren fonksiyon
    
    char kelime[100];
    printf("Kelimeyi Girin: ");
    scanf("%s",&kelime); // scanf oldugu için boþluk býrakýldýðýnda boþluktan sonraki kýsmý almaz.
    
    printf("Katar Uzunlugu: %d",strlen(kelime));
*/
/*   
    // Strcpy : Bir char ifadeyi kopyalayarak tekrar kullanmak için hafýzasýna alan fonksiyondur.

    char kaynak[30]="Merhaba Balikesir";
    char kopya[30]="";
     
    strcpy(kopya,kaynak); // Ýki parametresi vardýr. Birinci parametre nereye kopyalanacaðýný belirtir. Ýkinci parametre nereden kopyalanacýný belirtir.
	printf("%s",kopya);
*/
/*	
	//Strncpy : Strcpy'den farký strcpy direkt olarak metni kopyalarken strncpy ne kadarlýk bir metin kopyalandýðýný da gösterir.
	
	char nereden[30]="Merhaba Ankara";
	char nereye[30]="";
	
	strncpy(nereye,nereden,14);
	printf("%s",nereye);
*/
/*
    // Strcat : Gönderilen verileri birleþtiren bir fonksiyondur.
     
 	char kitapad[30],yazar[30],kitapyazar[60];
 	
 	printf("Kitap Adi ve Yazari Girin: ");
 	scanf("%s%s",kitapad,yazar);
 	
 	strcat(kitapyazar,kitapad);
 	strcat(kitapyazar," ");
 	strcat(kitapyazar,"<-->");
 	strcat(kitapyazar,yazar);
 	
 	printf("\n\n");
 	printf("%s",kitapyazar);
*/



  	
	return 0;
}
