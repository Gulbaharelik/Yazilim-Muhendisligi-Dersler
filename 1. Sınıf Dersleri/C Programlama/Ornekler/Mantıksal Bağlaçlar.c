#include <stdio.h>
#include <stdlib.h>


int main() {
/*	
	Mantýksal ifadeler doðruysa true olur
	Mantýksal ifadeler yanlýþsa eðer false olur.
	Bütün 0 olmayan sayýlar true kabul edilir.
	0 false kabul edilir.
		
	Mantýksal Operatörler	
	<---- küçük müdür sorusunu sorar
	>---- büyük müdür sorusunu sorar
	<=---- küçük eþit midir sorusunu sorar
	>=---- büyük eþit midir sorusunu sorar
	==---- eþit midir sorusunu sorar
	!=---- eþit deðil midir sorusunu sorar
	
	
	Mantýksal Baðlaçlar
	&& -----> ve baðlacýdýr . true&&true olanlar dýþýnda hepsi yanlýþ
	|| -----> veya baðlacýdýr. false||false dýþýnda hepsi doðru olur.
	! ------> deðil baðlacýdýr. true olaný false , false olaný true yapar.
	
	Þartlý Cümleler 
	x > y ? x: y: // soru iþareti burada ise anlamý katar. Cümle olarak ; x büyük y ise ifadenin eþiti x olur ama deðilse ifadenin eþiti y olur. 
	
	Bool veritipi (ture - false)
	bool a = true diye tanýmlanamaz. 
	
*/

/*
   int a = 40;
   int b = 50;  
   int c = 60;
   int d = 70;

   a > c && c<= d && (a > b || b < d) bu ifade yanlýþ olur

   !( a >= d) bu ifade doðru olur 
   
   
   int a,b = 20,c=30;
  
   a =b < c ? b : c;
   printf("%d", a);
*/

	printf("%d",(3 < 4)  && (4== 4)); //ve operatörü 1 && 1 olduðu durumda doðru çýkartýr.
	printf("%d",(3 < 4) || ( 4==4)); //veya operatörü 1 || 1 + 1|0 olduðu durumlarda doðru olur.
	printf("%d", ! (3< 4)); // doðru olan sonucu yanlýþa yanlýþ olan sonucu doðruya çevirir.

  	getchar();
	  	
	return 0;
}
