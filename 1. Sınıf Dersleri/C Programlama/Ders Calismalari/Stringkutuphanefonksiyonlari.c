#include <stdio.h>
#include <stdlib.h>


int main() {

/*	
	//puts ve gets c�mlelerin tamam�n� al�r ve di�er fonksiyonlar gibi yar�m b�rakmaz.
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
	
	printf("%18s",kitap); // Buraada %10s yazmam�z�n nedeni 10 karakter bo�luk b�rakmak istememiz. 
	
	printf("\n");
	
	printf("%20.5s",kitap); // Burada noktadan sonra yaz�lan karakter say�s� kadar yazd�r�l�r.
	
	printf("\n");
	
	printf("%-20s",kitap); //Burada sola dayal� olarka karekter atad� yani gerekli kadar yazd�ktan sonra sa�da NULL karakterler b�rakt�.
*/
/*
    // Strlen : girilen karakter dizisinin uzunlu�unu veren fonksiyon
    
    char kelime[100];
    printf("Kelimeyi Girin: ");
    scanf("%s",&kelime); // scanf oldugu i�in bo�luk b�rak�ld���nda bo�luktan sonraki k�sm� almaz.
    
    printf("Katar Uzunlugu: %d",strlen(kelime));
*/
/*   
    // Strcpy : Bir char ifadeyi kopyalayarak tekrar kullanmak i�in haf�zas�na alan fonksiyondur.

    char kaynak[30]="Merhaba Balikesir";
    char kopya[30]="";
     
    strcpy(kopya,kaynak); // �ki parametresi vard�r. Birinci parametre nereye kopyalanaca��n� belirtir. �kinci parametre nereden kopyalanac�n� belirtir.
	printf("%s",kopya);
*/
/*	
	//Strncpy : Strcpy'den fark� strcpy direkt olarak metni kopyalarken strncpy ne kadarl�k bir metin kopyaland���n� da g�sterir.
	
	char nereden[30]="Merhaba Ankara";
	char nereye[30]="";
	
	strncpy(nereye,nereden,14);
	printf("%s",nereye);
*/
/*
    // Strcat : G�nderilen verileri birle�tiren bir fonksiyondur.
     
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
