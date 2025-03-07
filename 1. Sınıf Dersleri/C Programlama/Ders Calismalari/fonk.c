#include <stdio.h>
#include <stdlib.h>

/* 		FONKSÝYONLAR
	Fonksiyonlar yapýlacak iþlemlerin kýsalmasýna yarar. Ve kendimiz yapmasý gerekeceði iþleri onun yapmasý bize kolaylýk saðlar
	Dönmeyen fonksiyon void fonksiyondur.
*/
/*void hatayibas(int hata){
	printf("Hata Kodu %d",hata);
}

int main() {
	
	// Scanf ile sayý alýnacak ama sayý negatif olmayacak.
	int sayi;
	
	printf("Lutfen negatif olmayan bir sayi girin:");
	scanf("%d",&sayi);
	
	if(sayi<0){
		hatayibas(404); // Parametre göndermek zorundayýz o yüzden sayi yazdýk.
	}
	else{
		printf("Tebrikler");
	}
*/
/*
int topla(int sayi1,int sayi2){
	
	return (sayi1+sayi2);
}

int main(){

	int sayi1,sayi2;
	int toplam;
	
	scanf("%d %d",&sayi1,&sayi2);
	toplam = topla(sayi1,sayi2);
	printf("%d",toplam);
*/
/*
int faktoriyel(int sayi){
	
	int fact=1;
	
	for(;sayi>0;sayi--)
	{
		fact *=sayi;
	}
	return fact;
}



	int main(){
		
	int n;
	
	printf("Faktoriyelini istediginiz sayiyi girin:");
	scanf("%d",&n);
	
	printf("Faktoriyel: %d",faktoriyel(n));
	
	return 0;
}
*/
/*
//Asal sayi mi deðil mi?
//Asal sayý, 2 den kendisine kadar olan sayýlardan hiçbirine tam bölünmeyen sayýdýr.

int asal_mi(int sayi){
	
	int i;
	for(i=2;i<sayi;i++)
	{
		if(sayi%i==0){
			return 0;
		}
	}
	return 1;
}


int main(){
	
	int n;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&n);
	
	if(asal_mi(n)==0){
		printf("Bu sayi asal degildir.");
	}
	else{
		printf("Bu sayi asal sayidir.");
	}
	
	return 0;
}
*/
