#include <stdio.h>
#include <math.h>


// Tamsay�larda toplama i�lemi
int tamsayitopla(int k,int m){
	return k+m;
}
// Tamsay�larda �arpma i�lemi
int tamsayicarpma(int k,int m){
	return k*m;
}
// Karmai��k say�larda toplama i�lemi
int karmasiksayitopla(){
 	int c1,c2;
 	int d1,d2;
	return (c1+c2),(d1+d2);	
}
// Karma��k say�larda �arpma i�lemi
int karmasiksayicarpma(){
	int c1,c2;
	int d1,d2;
	return (c1*c2)+(-1)*(d1*d2),(c1*d1)+(c2*d2);
}
// Dikd�rtgenin �evre hesab�
int Dikdorgencevre(int a,int b){
	return 2*(a+b);
}
// Dikd�rtgenin alan hesab�
int Dikdortgenalan(int a,int b){
	return a*b;
}
// ��genin �evre hesab�
int Ucgencevre(int a,int b,int c){
	return a+b+c;
}
// ��genin alan hesab�
float Ucgenalan(int a,int b,int c){
	float s=(float)(a+b+c)/2; // Burada float yazmam�z�n nedeni int ile tan�mlanan de�erlerin float olarak al�namamas�d�r.
	return sqrt(s*(s-a)*(s-b)*(s-c)); // Burada kullan�lan sqrt fonksiyonun k�k almaya yarar.
}
// Dairenin �evre hesab�
float Dairecevre(int r){
	float pi =3.14;
	return 2*pi*r;
}
// Dairenin alan hesab�
float Dairealan(int r){
	float pi =3.14;
	return pi*r*r;
}
// Kelvin'den Fahrenheit'e d�n���m
float kelvindenfahrene(int K){
	return (K*9/5)-459.67;
}
// Fahrenheit'ten Kelvin'e d�n���m
float fahrendenkelvine(int F){
	return (F+459.67)*5/9;
}
//
void StandartHesapMakinesi(){
		int secim;
		printf("Numara Turleri\n");
		printf("1.Tamsayi\n");
		printf("2.Karmasik sayilar\n\n");
		printf("Numara turunu secin:");
		scanf("%d",&secim);
		printf("\n");
}
//
void AlanCevreHesaplayici(){
		int secim;
		printf("Sekil Turleri\n");
		printf("1.Dikdortgen\n");
		printf("2.Ucgen\n");
		printf("3.Daire\n\n");
		printf("Bir sekil turu seciniz:");
		scanf("%d",&secim);
		printf("\n");
}
//
void SicaklikHesaplayici(){
		int secim;	
	 	printf("Hesaplama turunu secin: \n");
        printf("1.Kelvin'den Fahrenheit'e\n");
   		printf("2.Fahrenheit'ten Kelvin'e\n");
   		scanf("%d",&secim);
   		printf("\n");
}

int main(){

	printf("COKLU HESAP MAKINESI\n\n");
	
	int secim; 		// secim burada switch-case i�in gereklidir ve her bir se�im olay�nda kullan�l�r.
	int k,m; 		// Tamsay�larda i�lemlerde kullan�l�rlar.
	int a,b,c; 		// Dikd�rtgen ve ��gen hesaplamalar�nda tan�ml�lard�r.
	int r;			// Daire hesaplamalar� i�in tan�mlanm��t�r.
	int c1,c2;		// Karma��k say�larda birinci say� de�erleri i�in tan�mlanm��t�r.
 	int d1,d2;		// Karma��k say�larda ikinci say� de�eri i�in tan�mlanm��t�r.
	int K,F;		// S�cakl�k hesaplamalar� i�in tan�nmlanan de�erlerdir.
	

	printf("Hesap Makinesi Turleri\n\n");
	printf("1.Standart Hesap Makinesi\n");
	printf("2.Alan Cevre Hesaplayici\n");
	printf("3.Sicaklik Hesaplayici\n\n");
	printf("Hesap makinesi secin:");
	scanf("%d",&secim);
	printf("\n");	
	// Burada hesap makinesi t�rlerinden birini se�mek i�in switch-case a�t�k
	switch(secim)
	{
		// Standart hesap makinesi i�lemleri bu case'in i�erisinde yap�l�r.
		case 1:
			StandartHesapMakinesi();
			// Burada numara t�rlerinden birini se�mek i�in switch-case a�t�k
	        switch(secim)
	        {
	        	// Tamsay� i�lemleri bu case'in i�erisinde yap�l�r.
	        	case 1:
	        		printf("Hesaplama Turleri\n");
	        		printf("1.Toplama\n");
	        		printf("2.Carpma\n\n");
	        		printf("Hesapmala turunu secin:");
	        		scanf("%d",&secim);
	        		printf("\n");
	        		// Burada hesaplama t�rlerinden birini se�mek i�in switch-case kulland�k
	        		switch(secim)
	        		{
	        			// Tamsay�larda toplama i�lemi bu case i�erisinde yap�l�r.
	        			case 1:
	        				printf("1.sayiyi giriniz:");
	                        scanf("%d",&k);
	                        printf("2.sayiyi giriniz:");
	                        scanf("%d",&m);
	                        printf("\n");	                       
							tamsayitopla(k,m);
	                        printf("Sonuc: %d\n",tamsayitopla(k,m));
	                        break;
	                    // Tamsay�larda �arpma i�lemi bu case i�erisinde yap�l�r.    
	                    case 2:
						    printf("1.sayiyi giriniz:");
	                        scanf("%d",&k);
	                        printf("2.sayiyi giriniz:");
	                        scanf("%d",&m);
							tamsayicarpma(k,m);
							printf("Sonuc: %d\n",tamsayicarpma(k,m));
							break;
				        // Verilen se�im de�erlerinde farkl� bir de�er girildi�inde yap�lmas� gereken i�ler yaz�l�r.
						default:
							printf("Lutfen gecerli bir deger giriniz.\n"); 
					}
	                break;
				// Karma��k say� i�lemleri bu case i�erisinde yap�l�r.	 
	            case 2:
				    printf("Hesaplama Turleri\n");
	        		printf("1.Toplama\n");
	        		printf("2.Carpma\n\n");
	        		printf("Hesapmala turunu secin:");
	        		scanf("%d",&secim);
	        		printf("\n");
	        		// Burada hesaplama t�rlerinden birini se�tirmek i�in switch-case a�t�k
	        		switch(secim)
	        		{
	        			// Karma��k say�larda toplama i�lemi yap�l�r.
	        			case 1:
	        				printf("1.Karmasik sayiyinin gercek kismini giriniz:");
	        				scanf("%d",&c1);
	        				printf("1.Karmasik sayinin sanal kismini giriniz:");
	        				scanf("%d",&d1);
	        				printf("2.Karmasik sayiyinin gercek kismini giriniz:");
	        				scanf("%d",&c2);
	        				printf("2.Karmasik sayinin sanal kismini giriniz:");
	        				scanf("%d",&d2);
	        				karmasiksayitopla();
	        				printf(" Sayilarin Toplami: %d + %di\n",(c1+c2),(d1+d2));
	        				break;
	        			// Karma��k say�larda �arpma i�lemi yap�l�r	
	        			case 2:
	        				printf("1.Karmasik sayiyinin gercek kismini giriniz:");
	        				scanf("%d",&c1);
	        				printf("1.Karmasik sayinin sanal kismini giriniz:");
	        				scanf("%d",&d1);
	        				printf("2.Karmasik sayiyinin gercek kismini giriniz:");
	        				scanf("%d",&c2);
	        				printf("2.Karmasik sayinin sanal kismini giriniz:");
	        				scanf("%d",&d2);
	        				karmasiksayicarpma();
	        				printf("Sayilarin Carpimi: %d + %di\n",(c1*c2)+(-1)*(d1*d2),(c1*d1)+(c2*d2));
	        				break;
	        			// Verilen se�im de�erlerinde farkl� bir de�er girildi�inde yap�lmas� gereken i�ler yaz�l�r.	
	        			default:
							printf("Lutfen gecerli bir deger giriniz.\n");
							break;
					}
					break;
				// Verilen se�im de�erlerinde farkl� bir de�er girildi�inde yap�lmas� gereken i�ler yaz�l�r.	
				default:
					printf("Lutfen gecerli bir deger giriniz.\n");
					break;
			}
			break;
		// Alan-�evre Hesaplay�c�n�n i�lermleri bu case'in i�erisinde yap�l�r.	
		case 2:
			AlanCevreHesaplayici();
			// Burada �ekil t�rlerinden birini se�mek i�in switch-case kulland�k 
			switch(secim)
			{
				// Dikd�rtgen ile ilgili hesaplama i�lemleri bu case i�erisinde yap�l�r.
				case 1:
					printf("Dikdortgenin uzun kenarini giriniz:");
					scanf("%d",&a);
					printf("Dikdortgenin kisa kenarini giriniz:");
					scanf("%d",&b);
					Dikdorgencevre(a,b);
					printf("Dikdortenin Cevresi: %d\n",Dikdorgencevre(a,b));
					Dikdortgenalan(a,b);
					printf("Dikdortgenin Alani: %d\n",Dikdortgenalan(a,b));
					break;
				// ��gen ile ilgili hesaplama i�lemleri bu case i�erisinde yap�l�r.	
				case 2:
					printf("Ucgenin uc kenarini giriniz:\n");
					scanf("%d %d %d",&a,&b,&c);
					Ucgencevre(a,b,c);
					printf("Ucgenin Cevresi: %d\n",Ucgencevre(a,b,c));
					Ucgenalan(a,b,c);
					printf("Ucgenin Alani: %.2f\n",Ucgenalan(a,b,c));
					break;
				// Daire ile ilgili hesaplama de�erleri bu case i�erisinde yap�l�r.	
				case 3:
					printf("Daireinin yaricapini giriniz:\n");
					scanf("%d",&r);
					Dairecevre(r);		
					printf("Daireinin Cevresi: %.2f\n",Dairecevre(r));
					Dairealan(r);
					printf("Dairenin Alani: %.2f\n",Dairealan(r));
					break;
				// Verilen se�im de�erlerinde farkl� bir de�er girildi�inde yap�lmas� gereken i�ler yaz�l�r.	
				default:
					printf("Lutfen gecerli bir deger giriniz.\n");
					break;
			}
			break;
		// S�cakl�k Hesaplay�c�n�n i�lemleri bu case i�inde yap�l�r.	
		case 3:
			SicaklikHesaplayici();
			// Burada hesaplama t�r�n� se�mek i�in switch-case a�t�k.
    		switch(secim)
			{
				// Kelvinde Fahrenheit'e d�n���mde bu case'deki i�lemler kullan�l�r.
				case 1:
					printf("Kelvin degerini giriniz: ");
        			scanf("%d",&K);
					kelvindenfahrene(K);
					printf("Fahrenheit olarak degeri: %.2f\n",kelvindenfahrene(K));
					break;
				// Fahrenheit'ten Kelvin'e d�n���mde bu case'deki i�lemler kullan�l�r.	
				case 2:
					printf("Fahrenheit sicaklik degerini giriniz:");
        			scanf("%d",&F);
					fahrendenkelvine(F);
					printf("Kelvin olarak degeri: %.2f\n",fahrendenkelvine(F));
					break; 
				// Verilen se�im de�erlerinde farkl� bir de�er girildi�inde yap�lmas� gereken i�ler yaz�l�r.	
			    default:
        			printf("Lutfen gecerli bir deger giriniz.\n");
        			break;	   			
			}
			break;
		// Verilen se�im de�erlerinde farkl� bir de�er girildi�inde yap�lmas� gereken i�ler yaz�l�r.	
		default:
			printf("Lutfen gecerli bir deger giriniz.\n");
			break;	
	}
	
	return 0;
}
