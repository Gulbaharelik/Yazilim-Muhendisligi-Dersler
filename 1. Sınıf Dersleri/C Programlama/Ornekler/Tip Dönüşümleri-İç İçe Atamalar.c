#include <stdio.h>
#include <stdlib.h>
#define PI 3.14 // sabti de�er tan�mlamak i�in 'define' kullan�l�r. (bunu k�re hacmi kullan�lan kod yaz�m�nda kulland�k)


int main() {
	
/*
	int a1= 42;
	char b1= 66;
	char b2= 'B';
	float c1= 4.2;
	double d1= 0.21;
	printf("%d %c %d %.1f %.2f %s\n", a1,b1,b2,c1,d1,"Yazilim Bilimi");
	
	
	printf("%d byte\n", sizeof(char));
	printf("%d byte\n", sizeof(int));
	printf("%d byte\n", sizeof(short int));
	printf("%d byte\n", sizeof(long int));
    printf("%d byte\n", sizeof(float));
    printf("%d byte\n", sizeof(double));
*/
	
	
/*	
	int x1=1;
	int x2=-1;
	
	
	printf("%d\n", 12+9);
	printf("%d\n", 12-9);
	printf("%d\n", 12*9);
	printf("%d\n", 12/9);
	printf("%d\n", 12%9);
	printf("%.2f\n", 12.1+9.2);
	
	printf("%d\n", -x1);
	printf("%d\n", -x2);  
*/
	
	
/*		
		��LEM SIRASI;
	
	Tekli operat�rler : (+) (-) (-x,+x) 1. �ncelik. Kendi aralar�nda sa�dan sola .
	�kili operat�rler : * , / % 2.�ncelik . Kendi aralar�nda soldan sa�a .
	�kili operat�rler : +, -  3. �ncelik . Kendi aralar�nda soldan sa�a
	
	Parantez i�i ifadeler her zaman ilk planda yap�l�r. 
	
	printf("%d\n", 2-3+4);
	printf("%d\n", 2*3-4);
	printf("%d\n", 2-3/4);
	printf("%d\n", 2+3%4);
	printf("%d\n", 2/3*4);
	printf("%d\n", 2%3/4);
	printf("%d\n",-2+3);
	printf("%d\n", 2* -3);
	printf("%d\n", -2*-3);  
	printf("%d\n", (2+3)%4); 
*/

/*	
	Atamalar ,Azrt�ma ,Azaltma i�lemleri
	
	de�i�ken (variable)= ifade ( expression);
	int x= 15; 
	int y= 14;
	
	x=y ; ( y'nin de�erini x'e atar . x=7 ,y=7 olur)
	y=x ;
	
	�rnek ;
	 
	int x=6;
	int y =7;
	y=x+1  ( x+1 hesaplan�yor (8) ve y'ye at�l�yor. x=7 , y=8 olur.)
	
	Atama k�sm�nda ilk olarak sa� taraftaki k�s�m hesaplan�r. Sonra atama yap�l�r.
	
	i=i+1 ;
	Bunun e�iti ayn� zamanda i+=1 
	i'yi art�mak i�in ++i; (e�er i++ olur ise ekrana yazd�r�lan de�er i'nin kendisi olur .��lem �nceli�inden dolay�.)
	i'yi azaltmak i�in --i;(art�rmada oldu�u gibi ayn� �ey bu i�lem i�ind de ge�erlidir.)
	
	
    i=i % a bu ifadenin e�iti i %=a;
    	
	��i�e Atamalar 
	
	i = k = j = 0; (En sa� taraftan ba�layarak atama yap�l�r. Programc�lar bunu basit kodlamalarda kullan�rlar.)*/ 
	
/*	
	int x= 5;
	int y= 7;
	int a = 2;
	
	x=y ;
	y = x+a+1;
		
	printf("x:%d\ny:%d\na:%d\n",x,y,a); // B�yle yapt���m�zda s�ras�yla alt alta yazmam�a gerek kalmaz.
	
	x=4;
	y=5;
	a=6;
	printf("x:%d y:%d a:%d\n", --x, ++y, a++);
	printf("x:%d y:%d a:%d\n", x , y ,a);
    printf("x:%d y:%d a:%d\n", x--, --y, a--); //s�ras�yla yap�lan i�lemlerde ondan �nceki de�eri kullanmas� gerekir.	
	/*
	x=2 a=6
	x=  x + (a+1);
*/
	
/*
	x+= a+1;
	
	printf("%d\n", x);
	
	x = y = a+4;
	
	printf("x:%d y:%d a:%d\n",x,y,a); 
*/
		
/*	
	Tip D�n���mleri
	
	*Otomatik D�n���mler 
	3.2/2 float ve int bir de�er bir arada kullan�lm��t�r. (2 yi float olark al�r.Bu da otomatik d�n���m olarak ge�er.)
	
	Otomatik D�n���m �izelgesi:
	
	char
	short-----------> int--------> float ---------> double -----> long double ( burada sa�a do�ru otomatik olarak �evrilir.)
	
	*Manuel D�n���mler 
	3.2 say�s�n� int yapmak istersek ------> (int) 3.2 ---------> 3 sonucunu verir.(kesirli k�s�m at�l�r.)

	
  int x= 3;
  float y = 0.1;
  printf("%.2f\n", x/y);
  
  printf("%.2f\n",2*4.2 +4%2);
  printf("%.2f\n", 12.5/2);
  printf("%.2d\n",(int)3.2);
  printf("%.2f\n",(float)3);
*/


/*
   Giri� -��k�� Fonksiyonlar�:

   printf ve scanf
 
   float olan bir de�eri ekrana bast�rmak i�in printf("%f",de�er); �eklinde yapar�z
   float olan bir de�eri tan�mlay�p daha sonra bu de�eri kullanc�dan almak istersek de scanf("%f",&de�er); �eklinde yazar�z. 
   & i�aret verilen de�ere kullan�c�dan gelen bir de�eri atad���m�z� g�sterir.
*/

	return 0;
}
