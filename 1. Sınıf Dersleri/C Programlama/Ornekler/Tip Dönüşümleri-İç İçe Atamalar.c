#include <stdio.h>
#include <stdlib.h>
#define PI 3.14 // sabti deðer tanýmlamak için 'define' kullanýlýr. (bunu küre hacmi kullanýlan kod yazýmýnda kullandýk)


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
		ÝÞLEM SIRASI;
	
	Tekli operatörler : (+) (-) (-x,+x) 1. öncelik. Kendi aralarýnda saðdan sola .
	Ýkili operatörler : * , / % 2.öncelik . Kendi aralarýnda soldan saða .
	Ýkili operatörler : +, -  3. öncelik . Kendi aralarýnda soldan saða
	
	Parantez içi ifadeler her zaman ilk planda yapýlýr. 
	
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
	Atamalar ,Azrtýma ,Azaltma iþlemleri
	
	deðiþken (variable)= ifade ( expression);
	int x= 15; 
	int y= 14;
	
	x=y ; ( y'nin deðerini x'e atar . x=7 ,y=7 olur)
	y=x ;
	
	örnek ;
	 
	int x=6;
	int y =7;
	y=x+1  ( x+1 hesaplanýyor (8) ve y'ye atýlýyor. x=7 , y=8 olur.)
	
	Atama kýsmýnda ilk olarak sað taraftaki kýsým hesaplanýr. Sonra atama yapýlýr.
	
	i=i+1 ;
	Bunun eþiti ayný zamanda i+=1 
	i'yi artýmak için ++i; (eðer i++ olur ise ekrana yazdýrýlan deðer i'nin kendisi olur .Ýþlem önceliðinden dolayý.)
	i'yi azaltmak için --i;(artýrmada olduðu gibi ayný þey bu iþlem içind de geçerlidir.)
	
	
    i=i % a bu ifadenin eþiti i %=a;
    	
	Ýçiçe Atamalar 
	
	i = k = j = 0; (En sað taraftan baþlayarak atama yapýlýr. Programcýlar bunu basit kodlamalarda kullanýrlar.)*/ 
	
/*	
	int x= 5;
	int y= 7;
	int a = 2;
	
	x=y ;
	y = x+a+1;
		
	printf("x:%d\ny:%d\na:%d\n",x,y,a); // Böyle yaptýðýmýzda sýrasýyla alt alta yazmamýa gerek kalmaz.
	
	x=4;
	y=5;
	a=6;
	printf("x:%d y:%d a:%d\n", --x, ++y, a++);
	printf("x:%d y:%d a:%d\n", x , y ,a);
    printf("x:%d y:%d a:%d\n", x--, --y, a--); //sýrasýyla yapýlan iþlemlerde ondan önceki deðeri kullanmasý gerekir.	
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
	Tip Dönüþümleri
	
	*Otomatik Dönüþümler 
	3.2/2 float ve int bir deðer bir arada kullanýlmýþtýr. (2 yi float olark alýr.Bu da otomatik dönüþüm olarak geçer.)
	
	Otomatik Dönüþüm Çizelgesi:
	
	char
	short-----------> int--------> float ---------> double -----> long double ( burada saða doðru otomatik olarak çevrilir.)
	
	*Manuel Dönüþümler 
	3.2 sayýsýný int yapmak istersek ------> (int) 3.2 ---------> 3 sonucunu verir.(kesirli kýsým atýlýr.)

	
  int x= 3;
  float y = 0.1;
  printf("%.2f\n", x/y);
  
  printf("%.2f\n",2*4.2 +4%2);
  printf("%.2f\n", 12.5/2);
  printf("%.2d\n",(int)3.2);
  printf("%.2f\n",(float)3);
*/


/*
   Giriþ -Çýkýþ Fonksiyonlarý:

   printf ve scanf
 
   float olan bir deðeri ekrana bastýrmak için printf("%f",deðer); þeklinde yaparýz
   float olan bir deðeri tanýmlayýp daha sonra bu deðeri kullancýdan almak istersek de scanf("%f",&deðer); þeklinde yazarýz. 
   & iþaret verilen deðere kullanýcýdan gelen bir deðeri atadýðýmýzý gösterir.
*/

	return 0;
}
