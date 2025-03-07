#include <stdio.h>
#include <stdlib.h>

/*                   POÝNTER NEDÝR?
* Türkçe olarak gösterici anlamýna gelir.
* Pointerlar adres bilgisi tutan deðiþkenlerdir.
* Adres bellek kutularýnýn baþlangýç yerleridir.
*/
// & iþareti adres bilgisini almamýza yarar.
// * iþareti pointerlara uygulandýðý zaman adresteki deðeri verir. 


/*
int main() {
	
	int i = 5;
	
	int *p = &i;
	
	printf("%u\n",p); // %p ve %u pointerlarý bastýrma için kullanýlýr.
	
	printf("%d",*p);
	
	return 0;
}
*/
/*

int main(){
	
	int a = 5,*ap;
	float b = 3.2,*bp;
	double c = 3.412,*cp;
	char d = 'a',*dp;
	
	int sayilar[5]={1,2,3,4,5};
	
	int *arrayp;
	
	ap = &a;
	bp = &b;
	cp = &c;
	dp = &d;
	
	arrayp = &sayilar[1];
	
	printf("%u adresindeki intin degeri %d dir.\n",ap,*ap);
	printf("%u adresindeki floatin degeri %f dir.\n",bp,*bp);
	printf("%u adresindeki  doublenin %lf dir.\n",cp,*cp);
	printf("%u adresindeki charin degeri %c dir.\n",dp,*dp);
	printf("%u adresindeki sayilarin elemaninin degeri %d dir.",arrayp,*arrayp);	
	
	
	return 0;
}
*/
/*
int main(){
	
	int i,j=1;
	int *jp1,*jp2= &j;
	
	jp1 = jp2;
	
	i = ++(*jp2);
	
	*jp2 = *jp1 + 1;
	
	printf("i = %d,j = %d,*jp1 = %d,*jp2 = %d\n",i,j,*jp1,*jp2);
	
	
	return 0;
}
*/



