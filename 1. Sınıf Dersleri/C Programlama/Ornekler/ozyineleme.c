#include <stdio.h>
#include <stdlib.h>


/*
	Fonksiyonun kendisini �a��rmas�n� sonlanaca�� noktay� belirtmek i�in kullan�lan olgulard�r.
	
	�zyineleme : Bir fonksiyonun kendi kendini �a��rmas� demektir.
	Bir d�ng� kurarak ��zmeye �al���lan problemlerin kullan�m zorlu�u daha basit bir hale getirir.
	�zyineleme sonsuz bir veri k�mesini sonlu bir tan�mla ifade edebilmesinden gelir. Bu ayn� zamanda sonsuz say�da yine sonlu say�da bir tan�mla ifade edebilmemizi sa�lar.
	�zyinli tan�m yap�l�rken problemin ��z�m�nde nas�l bir s�ra izlendi�ini kar��la�t�rmak gerekir.
	D�ng�ye benzer bir yap�d�r. Dolay�s�yla d�ng� yap�lar�nda olan problemelere a��kt�r.
	
	1-Temel olgu (base case) : Hi�bir matematiksel hesaplama yap�lmadan elde edilebilen i�lemdir.
	2-�zyineli tan�m (recursive definition) : Bir problemin belirli bir n an�ndaki ��z�m�n� bulmaya yarayan matemetiksel tan�m�d�r.
	
	Bir problemi ��zmek i�in as�l y�ntem o problemi daha k���k par�alara b�lebilmektir.
	�zyinelemeli tan�m�n durmas� gerekn noktan�n belirlenmesi gerekir. Bu ise temel olgu ile sa�lan�r.
	
*/

/*
	�zyineli bir fonksiyonun i�inde bir int n tan�mlanm��sa fonksiyonun �al��mas� esnas�nda ona RAM de 4 bayt yer ayr�l�r.
	�zyinelemeli bir fonksiyon i�i bitince return e geldi�inde en ba�a d�nmez.
	Kendini kim �a��rm��sa o fonksiyonun ilgili sat�r�na d�ner.
	
*/

/*
int f(int n){
	if(n==0)
		return 1;
	int sonuc;
	sonuc = n*f(n-1); // Burada fonksiyonun kendisini nas�l �a��raca��n� g�sterdik
		
	return sonuc;	
}

int main() {
	int n;
	printf("Kac faktoriyel: ");
	scanf("%d",&n);
	printf("%d! = %d",n,f(n));
	return 0;
}
*/
