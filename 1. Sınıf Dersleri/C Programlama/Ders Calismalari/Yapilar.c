#include <stdio.h>
#include <stdlib.h>

	// Enum : Dallanmalarýn çok olduðu,ve dizi elemanlarýnýn çok olduðu dizilerde kullanýlýr. 
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
//Struct :Aralarýnda mantýksal iliþki bulunan fakat farklý türde olan bilgilerdir.

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
    	// Burada ad tanýmlamalarýný yaptýk aþaðýda ise  tekrar çaðýrdýk.
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
//typdef : tip tanýmlama olarak düþünülebilir. Tam sayý isimli deðiþkenden yeni bir deðiþken üretmek için kullanýlabilir.


   typedef int d1; // deðiþken oluþturuldu
   
   
    int main(){
    
	int toplam;
	d1 d2; // burada üretilen deðiþkenden tekrar iki deðiþken üretildi
    d1 d3;
    d2=20;
    d3=40;
    
    toplam=d2+d3; // Burada toplam tanýmlandý
   	printf("%d",toplam);
   	   	
   	return 0;
}
*/
