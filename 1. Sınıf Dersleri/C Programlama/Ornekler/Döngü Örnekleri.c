#include<stdio.h>


int main(){

/*

   	//Kendisi hari� b�t�n pozitif tamsay� �arpanlar�n�n toplam� kendisine e�it olan say�lara m�kemmel say� denir. 
    //�rne�in, 28 say�s�n�n kendisi hari� pozitif �arpanlar� toplam� 1+2+4+7+14 = 28 oldu�undan 28 say�s� m�kemmel bir say�d�r.

	//Buna g�re klavyeden girilen bir say�n�n m�kemmel say� olup olmad���n� s�ylenen C program�n� yaz�n�z.
	
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
	
	//�� basamakl� rakamlar� birbirinden farkl� t�m say�lar� ekranda g�steren ve bu kurala uygun ka� tane say� oldu�unu s�yleyen C program�n� yaz�n�z. 
	
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

 //Furkan, bir roman�n her g�n bir �nceki g�n okudu�u sayfadan 5 sayfa fazlas�n� okumaktad�r. �lk g�n 10 sayfa okuyarak ba�layan Furkan' �n 1.000 sayfal�k bir roman� ka� g�nde bitirece�ini bulan program� C dilinde kodlay�n�z.		
	
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
//Her g�n bir �nceki okudu�undan 12 sayfa fazla kitap okuyan biri,ilk g�n 5 sayfa kitap okuyarak 12000 sayfal�k bir kitab� ka� g�nde bitirebilir ?

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
//20 ki�ilik bir s�n�fta ��rencilerin bir dersten ald��� notlar klavyeden girilecektir. Notlar girildikten sonra, s�n�f�n ortalamas�n�,
// s�n�ftaki en y�ksek ve en d���k notu bulan ve ekranda g�steren program�n kodunu C diliyle yaz�n�z


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
