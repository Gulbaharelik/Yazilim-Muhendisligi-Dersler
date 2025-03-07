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
	 
    //Dizi uzerinde karakter degeri atamasý yaptýk.
    char a_string[60] = "Butun derslerim cok kotu ne kadar cabalasam da olmuyor";
    char b_string[30] = "ne";
    
    //strstr atmasý icin sonuc degerini esitledik.
    char *sonuc_string = strstr(a_string, b_string);
    
    //Dongu icerisinde boþ olarak baslatýp ikinci icerisinde tanýmlanan degerden sonraki degerleri girmesi saglanýr.
    if (sonuc_string == NULL) // NULL : degeri bilinmeyen ,bos deger anlamýna gelir.
    {
        printf ("Dizinin icerisinde alt dizi vardýr.");
    } 
    else
    {
        printf ("Alt dizi -> %s", sonuc_string); //Burada %s kullanýlmasýnýn nedeni char veri tipi olmasýdýr.
    }
 
    
	return 0;
}
