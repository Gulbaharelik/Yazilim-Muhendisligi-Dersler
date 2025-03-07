#include <stdio.h>
#include <stdlib.h>

/*
void hesapla(int x) {
 
printf("%d", x); 
if(x < 9) {
	hesapla(x + 1);
}
	printf("%d", x);
} 

main() {
 	int n=1;
	hesapla(n); 
	
	return 0;
}
*/
/*
float calculate(float x, float y)
{
return x * y / (x + y);
}

int main(){
	
	float a, b, c;
	c = calculate(a, b);
	printf("%f\n", c );
	return 0;
}
*/
/*
int main()
{
char *p = (char *) 0x1AA8;
char *q = (char *) 0x1AA0;
long *lp = (long *) 0x1AA8;
long *lq = (long *) 0x1AA0;
printf("fark1 = %d\n", p - q);
printf("fark2 = %d\n", lp - lq);
return 0;
}
*/
/*
int getmax(int *p, int size);
int main()
{
int s[10] = {1, 23, 45, -4, 67, 12, 22, 90, -3, 44};

printf("%d\n", getmax(s, 10));
return 0;
}
int getmax(int *p, int size)
{
int i, max;
max = p[0];
for (i = 1; i < size; ++i)
if (max > p[i])
max = p[i];
return max;
}
/*
int main(){
	
	int a=10;
	int *p;
	p=&a;
	printf("%d\n",*p); // p'nin gösterdiði yeri basar
	printf("%d\n",p); // p'nin deðerini yani ,p'nin gösterdiði yerin adresini basar
	printf("%d\n",a); //a'nýn deðerini basar
	printf("%d\n",&a); //a'nýn adresini basar
	printf("%d\n",&p); //p'nin adresini basar
	getch();
	
	return 0;
}
*/
//Dizi sayesinde ramde bulana bir adrese eriþmek mümkündür.
//Pointerlarda dinamik hafýza ayrýmý vardýr. Ama dizilerde bu bulunmaz.
//Her pointer doðal bir dizidir.
// d[4] ve *(p1+4) ayný deðeri iþaret ederler.
// p1 = &d[8] bunun anlamý d'nin 8. elemanýnýn adresini p1'e koy demektir.

/* 			Dinamik hafýza Kullanýmý 
	*Dizilerde ayrýlan yer sabittir.
	*C dili için kodlama sýrasýnda henz kod çalýþmadan bu yerin miktaarý belirli olmalýdýr.
	*Malloc sayesinde yer ayýrma iþlemi yapýlýr.
	*int *p=(int*)malloc(size(int)*a); //burada dinamik bir dizi ayrýlmýþtýr.	
*/
/*
int f(int *); //Burada fonksiyonlarý çaðýrmamýzýn nedeni ana fonksiyondan 
int g(int); //sonra kullanýldýklarý için an fonksiyonun aonu göremeyeceði ve okuma yapamayacaðý için.
int main(){
	
	int *p;
	int a=10;
	p=&a;
	printf("%d\n",*p); //10
	*p=20; // Bunun sayesinde a deðeri deðiþir çünkü pointer a'yý gösteriyo ve bunun sayesinde deðer deðiþti.
	printf("%d\n",a); //20
	int *q= (int*)malloc(sizeof(int)*a);
	q[3]=70;
	printf("%d\n",q[3]);
	f(&a);
	printf("%d\n",a);
	g(a); //burada a sonradan deðer deðiþimi yapýldýðý içn deðer deðiþimi görülmez.
	printf("%d\n",a);
	return 0;
}
int g(int a){ // CALL BY VALUE (deger ile çaðýrma)
	a=90; 
}
int f(int *a){ //CALL BY REFERANCE (gösterici ile çaðýrma)
	*a=80; //Bunu gönderince a'nýn gösterdiði yeri bastýrýr.
}
*/
/*
#define SIZE 10

void bsort(int *p, int size);

void bsort(int *p, int size)
{
int i, k, temp;
for (i = 0; i < size - 1; ++i)
for (k = 0; k < size - 1 - i; ++k) 
if (p[k] > p[k+1]) {
temp = p[k];
p[k] = p[k+1];
p[k+1] = temp;
}
}

int main(){
	
int a[SIZE] = {3, 4, 5, 8, 78,12, -2, 11, 41, -34};
int i;
bsort(a, SIZE); //küçükten büyüðe doðru sýralamaya yarar.
for (i = 0; i < SIZE; ++i)
printf("a[%d] = %d\n",i ,a[i]);
return 0;
}
*/
/*
int *getmax(int *p, int size);

int main()
{
int s[10] = {1, 23, 45, -4, 67, 12, 22, 90, -3, 44};
printf("%d\n", *getmax(s, 10));
return 0;
}
int *getmax(int *p, int size)
{
int *pmax, i;
pmax = p;
for (i = 1; i < size; ++i)
if (*pmax > p[i])
pmax = p + i;
return pmax;
}
*/
/*
int main()
{
char dest[100] = "C ogreniyoruz!";
char source[100];
printf("kopyalanacak yaziyi giriniz : ");
gets(source); // Burada gets fonksiyonu yazýyý girdirme iþlemini yapr(scanf gibi)
printf("kopyalama yapilmadan once kopyalamanin yapacagi yerde bulunan yazi :\n");
puts(dest); //puts fonksiyonu ilk olarak yazýlan yazýyý yazdýrýr. 
strcpy(dest, source);
printf("kopyalamadan sonra kopyalamanin yapildigi yerde bulunan yazi : \n");
puts(dest); // puts fonksiyonu kopyalamadan sonra yazýlan yazýyý yazdýrýr.
return 0;
}
*/
/*
#include <string.h>

int main(){
	
char s1[100], s2[100];
printf("sonuna ekleme yapilacak yaziyi giriniz : ");
gets(s1); // Burada kullanýlan getsler scanf fonksiyonu yerine kullanýlýr.
printf("girdiginiz yazinin uzunlugu = %d\n", strlen(s1));
printf("eklemek istediginiz yaziyi giriniz : ");
gets(s2);
printf("eklenecek yazinin uzunlugu = %d\n", strlen(s2));
strcat(s1, s2);
printf("ekleme yapildiktan sonra 1. yazi : ");
puts(s1); // Burada kullanýlan puts fonksiyonu print gibi yazdýrmak için kullanýlýr.
printf("ekleme yapildiktan sonra yazinin uzunlugu : %d\n", strlen(s1));

return 0;
} 
*/
/*
#include <conio.h>

int main(){
	
char s[100];
int ch;
printf("bir yazi giriniz :");
gets(s); //gets fonksiyonu scanf fonksiyonu gibi kullanýlmýþtýr.
printf("yaziyi hangi karakterle doldurmak istiyorsunuz : ");
ch = getchar(); //Klavyeden girilen bir karakteri okuyarak bellekteki bir deðiþkene atamak için kullanýlýr. 
printf("\nyazinin %c karakteriyle doldurulduktan sonraki hali : %s\n", ch, 
strset(s, ch));

return 0;
}
*/

/*
#include <string.h>
main()
{
char s[100]; 
printf("ters cevirilecek yaziyi giriniz : ");
gets(s);
printf("yazinizin ters cevrilmis hali : \n");
puts(strrev(s)); // Girilen karakter dizisinin ters çevrilmesinde kullanýlýr.
return 0;
}
*/
/*
void *mymemset(void *p, int x, int n);

int main()
{
int a[10];
int i;
mymemset(a, 0, 20);
for (i = 0; i < 10; ++i)
printf("%d\n", a[i]);
return 0;
}

void *mymemset(void *p, int x, int n)
{
char *_p = (char *)p;
while (n-- > 0)
* _p++ = x;
return p;
}
*/
/*
#include<stdlib.h>

typedef enum{
	bay,
	bayan
}cinsiyet;
typedef struct{
	int yas;
	char*isim;
	cinsiyet c;
}insan;
int emeklimi(insan*birey){
	if(birey->c == bay && birey->yas>55)
		return 1; //1 doðru anlmýna gelir
	if(birey->c == bayan && birey->yas>50)
		return 1; //1 doðru anlamýna gelir
}

int main(){
	int a;
	insan ali;
	insan*veli;
	veli=(insan*)malloc(sizeof(insan));
	veli->yas=40; //struct tan bir pointer tanýmlanýyor ise o zaman -> kullanýlýr
	veli->c=bay;
	ali.yas=60; // Normal bir deðiþken atanýyor ise "." kullanýlýr.
	ali.c=bay;
	printf("Alinin yasi: %d",ali.yas);
	printf("\nVelinin yasi: %d",veli->yas);
	printf("\nAli emekli mi :%d",emeklimi(&ali)); // ALi pointer olmadýðýndan onu çaðýrmamýz lazým
	printf("\nVeli emekli mi:%d",emeklimi(veli)); // Pointer olduðu için & kuulanmaya gerek yok
}
*/



/*
//Kullanýcýdan bir sayý alarak,ekrana matrisin bütün elemanlarýný 0 ve sadece ortadaki elemanlarý 1 olan bir artý yazýnýz.
#include<conio.h>

int main(){
	int i,n,j;
	printf("Bir sayi giriniz:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if((i==n/2||j==n/2)||(n%2==0 &&(j==n/2-1||i==n/2-1)))
				printf("1");
			else
				printf("0");	
		}
		printf("\n");
	}
	getch();
	
	return 0;
}
*/


/*
//Parametre olarak bir sayi alan ,aldýðý bu sayýdan küçük,
//en büyük asal sayýyý döndüren fonksiyonu yazýnýz
#include<conio.h>

int main(){
	int n,i,j;
	printf("Bir sayi giriniz:");
	scanf("%d",&n);
	
	for(i=n;i>=2;i--){
		int asal=1;
		for(j=2;j<i;j++){
			if(i%j==0)
				asal=0;
		}
		if(asal==1){
			printf("%d",i);
			break;
		}
	}
	return 0;
}
*/
/*
//       YUKARIDAKÝ SORUNUN FARKLI BÝR ÇÖZÜMÜ
int f(int n,int test){
	if(n-1==test)
		return 1;
	if(n%test==0)
		return 0;
	return f(n,test+1);		
}
int g(int n){
	if(f(n,2))
		return n;
	return g(n-1);	
}
int main(){
	int n;
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&n);
	printf("%d",g(n));
	return 0;
}
*/
