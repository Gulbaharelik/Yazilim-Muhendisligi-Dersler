#include <stdio.h>
#include <stdlib.h>


int main() {
/*	
	Mant�ksal ifadeler do�ruysa true olur
	Mant�ksal ifadeler yanl��sa e�er false olur.
	B�t�n 0 olmayan say�lar true kabul edilir.
	0 false kabul edilir.
		
	Mant�ksal Operat�rler	
	<---- k���k m�d�r sorusunu sorar
	>---- b�y�k m�d�r sorusunu sorar
	<=---- k���k e�it midir sorusunu sorar
	>=---- b�y�k e�it midir sorusunu sorar
	==---- e�it midir sorusunu sorar
	!=---- e�it de�il midir sorusunu sorar
	
	
	Mant�ksal Ba�la�lar
	&& -----> ve ba�lac�d�r . true&&true olanlar d���nda hepsi yanl��
	|| -----> veya ba�lac�d�r. false||false d���nda hepsi do�ru olur.
	! ------> de�il ba�lac�d�r. true olan� false , false olan� true yapar.
	
	�artl� C�mleler 
	x > y ? x: y: // soru i�areti burada ise anlam� katar. C�mle olarak ; x b�y�k y ise ifadenin e�iti x olur ama de�ilse ifadenin e�iti y olur. 
	
	Bool veritipi (ture - false)
	bool a = true diye tan�mlanamaz. 
	
*/

/*
   int a = 40;
   int b = 50;  
   int c = 60;
   int d = 70;

   a > c && c<= d && (a > b || b < d) bu ifade yanl�� olur

   !( a >= d) bu ifade do�ru olur 
   
   
   int a,b = 20,c=30;
  
   a =b < c ? b : c;
   printf("%d", a);
*/

	printf("%d",(3 < 4)  && (4== 4)); //ve operat�r� 1 && 1 oldu�u durumda do�ru ��kart�r.
	printf("%d",(3 < 4) || ( 4==4)); //veya operat�r� 1 || 1 + 1|0 oldu�u durumlarda do�ru olur.
	printf("%d", ! (3< 4)); // do�ru olan sonucu yanl��a yanl�� olan sonucu do�ruya �evirir.

  	getchar();
	  	
	return 0;
}
