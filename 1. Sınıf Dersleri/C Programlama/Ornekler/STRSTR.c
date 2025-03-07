#include <stdio.h>
#include <string.h>


int main() {
	printf("STRSTR FONKSIYONUNUN KULLANIMI\n\n");
	printf("strstr fonksiyonu; icerisine iki tane parametre alir,ikincisini birincisinin icerisine atar.Buldugu yerden itibaren sonuna kadar olan kismi degiskene atar.\n\n\n");
	
	/*
	STRSTR FONKSIYONU NEDIR?
	1-Icerisine iki tane parametre alir ve bu parametrelerden ikincisini birincisinin icerisine atar.
	2-Buldugu yerden itibaren sonuna kadar olan kismi atanmak istenen degiskene atar.
	3-Kisaca bir stringin icerisinde diger stringin gecip gecmemesine bakar.
    */
	 
    //Dizi uzerinde karakter degeri atamas� yapt�k.
    char a_string[60] = "Butun derslerim cok kotu ne kadar cabalasam da olmuyor";
    char b_string[30] = "ne";
    
    //strstr atmas� icin sonuc degerini esitledik.
    char *sonuc_string = strstr(a_string, b_string);
    
    //Dongu icerisinde bo� olarak baslat�p ikinci icerisinde tan�mlanan degerden sonraki degerleri girmesi saglan�r.
    if (sonuc_string == NULL) // NULL : degeri bilinmeyen ,bos deger anlam�na gelir.
    {
        printf ("Dizinin icerisinde alt dizi vard�r.");
    } 
    else
    {
        printf ("Alt dizi -> %s", sonuc_string); //Burada %s kullan�lmas�n�n nedeni char veri tipi olmas�d�r.
    }
 
    
	return 0;
}
