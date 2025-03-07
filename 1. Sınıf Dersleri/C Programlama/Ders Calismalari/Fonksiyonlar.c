#include <stdio.h>
#include <stdlib.h>
//Fonksiyonlar ikiye ayrýlýr : Geriye deðer döndüren fonksiyonlar ve geriye deðer döndürmeyen fonksiyonlar.
// Geriye deðer döndüren fonksiyonlar fonksiyon içerisinde aritmetik deðer döndürülüyorsa olur.
// Sadece yazdýrma veya çýktý alam iþelmelri yapýlýyorsa,geriye deðer döndürmeyen fonksiyon olur.
// Birden çok defa çaðrýlmak istenne bir komutu veya bibr satýrý çaðýrmak için fonksiyonlar kullanýlýr.
/*void listele()
{
	printf("Ali Yildiz\n");
	printf("Ayse Ozturk\n");
	printf("Ahmet Cinar\n");
	printf("Hakan Kaya\n");
	printf("Mehmet Tas\n");
}


int main() {
// Bu kýsýmda komut çaðýrýnca yukarýdaki iþlemler gerçeklerþir.
	
listele();	
	
	 
	
	return 0;
}
*/
/*
int toplam(int s1,int s2)
{
	int s3;
	s3=(s1+s2)*5-10;
	return s3;
}

int main(){
	
	int t;
	t=toplam(4,5);
	printf("%d\n",t);
	
	t=toplam(2,3);
	printf("%d",t);	
	return 0;
}
*/
/*
          //ÖRNEK
//Klavyedden girilen iki sayýyý toplayan ve sonucu yazdýran C programý yazýn

int topla(int x,int y)
{
	return x+y;
}
int main(){
	
	int a,b;
	printf("Bir a sayisi giriniz: ");
	scanf("%d",&a);
	printf("Bir b sayisi giriniz: ");
	scanf("%d",&b);
	
	int sonuc =topla(a,b);
	
	printf("Toplam: %d\n",sonuc);
	
	return 0;
}
*/
/*
int kupbul(int sayi)
{
	int sonuc=sayi*sayi*sayi;
	return sonuc;
}

int main(){
	
	int s;
	printf("Sayiyi Girin: ");
	scanf("%d",&s);
	kupbul(s);
	printf("\n\n Sonuc: %d",kupbul(s));
	
	
	return 0;
}
*/
/*
void dortgen(int kisa,int uzun)
{
	int i,j;
	for(i=0;i<uzun;i++)
	{
		for(j=0;j<kisa;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main(){
	dortgen(4,10);
	
	
	return 0;
}
*/



