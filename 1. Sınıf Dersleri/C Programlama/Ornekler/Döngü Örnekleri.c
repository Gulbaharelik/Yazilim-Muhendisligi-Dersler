#include<stdio.h>


int main(){

/*

   	//Kendisi hariç bütün pozitif tamsayý çarpanlarýnýn toplamý kendisine eþit olan sayýlara mükemmel sayý denir. 
    //Örneðin, 28 sayýsýnýn kendisi hariç pozitif çarpanlarý toplamý 1+2+4+7+14 = 28 olduðundan 28 sayýsý mükemmel bir sayýdýr.

	//Buna göre klavyeden girilen bir sayýnýn mükemmel sayý olup olmadýðýný söylenen C programýný yazýnýz.
	
	int sayi,i,toplam=0;
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	for(i=1;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			toplam+=i;
		}
	}
	if(toplam==sayi)
	{
		printf("Mukemmel bir sayidir.");
	}
	else
	{
		printf("Mukemmel sayi degildir.");
	}
	
*/	
 
 
/* 
	
	//Üç basamaklý rakamlarý birbirinden farklý tüm sayýlarý ekranda gösteren ve bu kurala uygun kaç tane sayý olduðunu söyleyen C programýný yazýnýz. 
	
	int i,k,l,m,sayac=0;
	for(i=100;i<=999;i++)
	{
		k=i/100;
		l=(i%100)/10;
		m=i%10;
		
		if(k!=l && k!=m && l!=m)
		{
			printf("%6d",i);
	        sayac++;
		}
	}
	
	printf("\n\n Bu kurala uygun %d sayi vardir.");
	
*/

/*

 //Furkan, bir romanýn her gün bir önceki gün okuduðu sayfadan 5 sayfa fazlasýný okumaktadýr. Ýlk gün 10 sayfa okuyarak baþlayan Furkan' ýn 1.000 sayfalýk bir romaný kaç günde bitireceðini bulan programý C dilinde kodlayýnýz.		
	
	int sayfa=10;
	int okunanSayfa=0;
	int gun=0;
	
	while(okunanSayfa <1000)
	{
	   okunanSayfa+=sayfa;
	   sayfa+=5;
	   gun++;
	}
	printf("%d. gunde kitap bitmistir.",gun);
	
*/

/*
//Her gün bir önceki okuduðundan 12 sayfa fazla kitap okuyan biri,ilk gün 5 sayfa kitap okuyarak 12000 sayfalýk bir kitabý kaç günde bitirebilir ?

    int sayfa=5;
    int okunanSayfa=0;
    int gun=0;
    
    while(okunanSayfa<12000)
    {
    	okunanSayfa+=sayfa;
    	sayfa+=12;
    	gun++;
	}
    printf("%d. gunde kitap bitmistir.",gun);

*/

/*
//20 kiþilik bir sýnýfta öðrencilerin bir dersten aldýðý notlar klavyeden girilecektir. Notlar girildikten sonra, sýnýfýn ortalamasýný,
// sýnýftaki en yüksek ve en düþük notu bulan ve ekranda gösteren programýn kodunu C diliyle yazýnýz


int dizi[10],i,max,min,toplam=0;
float ort;

for(i=0;i<10;i++)
{
	printf("%d. notu giriniz: ",i+1);
	scanf("%d",&dizi[i]);
	toplam += dizi[10];
}
 ort = toplam/10;
 printf("ortalama: %f\n",ort);
 
max=min=dizi[0];
for(i=0;i<10;i++)
{
	if(dizi[i]<min)
	   min=dizi[i];
	if(dizi[i]>max)
	   max=dizi[i];   
}
printf("En kucuk sayi: %d\n",min);
printf("En buyuk sayi: %d\n",max);

/*	
	return 0;
}
