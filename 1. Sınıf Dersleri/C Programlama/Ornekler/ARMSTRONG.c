#include <stdio.h>
#include <math.h> 

    int main(){
    printf("ARMSTRONG SAYI BULMA\n\n");
    printf("Bir sayinin tum rakamlarinin basamak sayisi kadar kuvvetlerinin alinarak toplanip kendisine esitlenmesini yapar.\n\n\n");
    
    /*Armstrong sayi ; n basamakli bir sayinin tum rakamlarinin basamak sayisi kadar kuvvetlerinin alýnarak toplanýp kendisine esitlenmesine denir. */
    
	
	//Deger tanimlamasi yapildi.
	int sayi,orjinalSayi,kalan;
	int n=0;
	float sonuc=0.0;
	
	//Kullanici girisi aliniyor.
	printf("Lutfen bir sayi giriniz:"); 
	scanf("%d",&sayi);
	
	orjinalSayi= sayi;   //Burada kullanilan islem sayesinde orjinalSayi sayi degerine atanýr.
	
	//Sayiyi donguye alarak sayinin basamak degerlerini 
	for (orjinalSayi= sayi; orjinalSayi != 0;++n)  
	{
		orjinalSayi /= 10;   //Burada yapila islemle orjinalSayi degerinin yuzde onu alýnýp kalan degeri elde edildi.
	}
	
	//Dongu içerisine alinan orjinalSayi degerinin modunu alarak kalan degeri elde edip bunu sonuca atadýk.
	for (orjinalSayi = sayi; orjinalSayi !=0; orjinalSayi /= 10) 
 	{
 		kalan = orjinalSayi %10;   //Kalan degere atanan deger orjianl sayýnýn modunun alýnmasýyla olusan degerdir.
 		sonuc += pow(kalan,n);     //Burada kullanilan pow üs alma fonksiyonudur.
	}
	
	//Sonucun verilen sayiya esit olup olmadigini kontrol ettik.
	if((int)sonuc == sayi) 
	  printf("%d bir Armstrong sayidir.",sayi);
	else
	  printf("%d bir Armstrong sayi degildir.",sayi); 
	  

return 0;
}
