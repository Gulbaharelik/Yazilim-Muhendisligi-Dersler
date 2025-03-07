#include <stdio.h>
#include <stdlib.h>


/*
	Fonksiyonun kendisini çaðýrmasýný sonlanacaðý noktayý belirtmek için kullanýlan olgulardýr.
	
	Özyineleme : Bir fonksiyonun kendi kendini çaðýrmasý demektir.
	Bir döngü kurarak çözmeye çalýþýlan problemlerin kullaným zorluðu daha basit bir hale getirir.
	Özyineleme sonsuz bir veri kümesini sonlu bir tanýmla ifade edebilmesinden gelir. Bu ayný zamanda sonsuz sayýda yine sonlu sayýda bir tanýmla ifade edebilmemizi saðlar.
	Özyinli taným yapýlýrken problemin çözümünde nasýl bir sýra izlendiðini karþýlaþtýrmak gerekir.
	Döngüye benzer bir yapýdýr. Dolayýsýyla döngü yapýlarýnda olan problemelere açýktýr.
	
	1-Temel olgu (base case) : Hiçbir matematiksel hesaplama yapýlmadan elde edilebilen iþlemdir.
	2-Özyineli taným (recursive definition) : Bir problemin belirli bir n anýndaki çözümünü bulmaya yarayan matemetiksel tanýmýdýr.
	
	Bir problemi çözmek için asýl yöntem o problemi daha küçük parçalara bölebilmektir.
	Özyinelemeli tanýmýn durmasý gerekn noktanýn belirlenmesi gerekir. Bu ise temel olgu ile saðlanýr.
	
*/

/*
	Özyineli bir fonksiyonun içinde bir int n tanýmlanmýþsa fonksiyonun çalýþmasý esnasýnda ona RAM de 4 bayt yer ayrýlýr.
	Özyinelemeli bir fonksiyon iþi bitince return e geldiðinde en baþa dönmez.
	Kendini kim çaðýrmýþsa o fonksiyonun ilgili satýrýna döner.
	
*/

/*
int f(int n){
	if(n==0)
		return 1;
	int sonuc;
	sonuc = n*f(n-1); // Burada fonksiyonun kendisini nasýl çaðýracaðýný gösterdik
		
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
