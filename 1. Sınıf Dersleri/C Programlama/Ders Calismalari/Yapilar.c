#include <stdio.h>
#include <stdlib.h>

	// Enum : Dallanmalar�n �ok oldu�u,ve dizi elemanlar�n�n �ok oldu�u dizilerde kullan�l�r. 
/*
   enum sehirler
    {
   	    hatali,adana,adiyaman,afyon,agri,amasya,ankara,antalya,aydin,artvin,balikesir
    };


    int main() {
		
	enum sehirler il;	
	il=balikesir;
	printf("%d",il);
	
	return 0;
}
*/
/*
//Struct :Aralar�nda mant�ksal ili�ki bulunan fakat farkl� t�rde olan bilgilerdir.

    struct kitapbilgi
    {
    	char kitapad[20];
    	char yazar[20];
    	int fiyat;
		float puan;
	};
	
    int main(){
	
	struct kitapbilgi kb={"SekerPortakali","Vasconceulos",10,7.25};
    
    printf("Kitap Ad: %s\n",kb.kitapad);
    
    printf("Yazar: %s\n",kb.yazar);
    
    printf("Fiyat: %d\n",kb.fiyat);
    
    printf("Puan: %.2f",kb.puan);
    
    return 0;
}
*/
/*
    struct kayit
    {
    	// Burada ad tan�mlamalar�n� yapt�k a�a��da ise  tekrar �a��rd�k.
    	char ad[20];
    	int no;
    	int sinif;
    	float ort;
	};struct kayit ogr;

int main(){
	
	printf("Ad Soyad: ");
	scanf("%s",&ogr.ad);
	
	printf("Numara: ");
	scanf("%d",&ogr.no);
	
	printf("Sinif: ");
	scanf("%d",&ogr.sinif);
	
	printf("Ortalama: ");
	scanf("%f",&ogr.ort);
	
	printf("%s\n",ogr.ad);
	printf("%d\n",ogr.no);
	printf("%d\n",ogr.sinif);
	printf("%f",ogr.ort);
	
  return 0;	
}
*/
/*
//typdef : tip tan�mlama olarak d���n�lebilir. Tam say� isimli de�i�kenden yeni bir de�i�ken �retmek i�in kullan�labilir.


   typedef int d1; // de�i�ken olu�turuldu
   
   
    int main(){
    
	int toplam;
	d1 d2; // burada �retilen de�i�kenden tekrar iki de�i�ken �retildi
    d1 d3;
    d2=20;
    d3=40;
    
    toplam=d2+d3; // Burada toplam tan�mland�
   	printf("%d",toplam);
   	   	
   	return 0;
}
*/
