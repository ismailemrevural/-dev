#include <stdio.h>
#include <stdlib.h>


typedef struct ogrbilgi
{
	char isim[43];  	//türkiyede en uzun isim 43 harfe sahiptir
	char soyisim[42]; //türkiyede en uzun soyisim 42 harften oluþmaktadýr
	int ogrno; 
	char sinif[5];
	char adres[100];	
}ogr;

int main() {
ogr kisi1 = {"Melike","Akpinar",1453,"9-F","Fatih Mahallesi Fetih Sokak Numara 14 Daire 53"};	
ogr kisi2 = {"Ismail Emre","Vural",1881,"11-F", "Selanik Mahallesi Kemal Sokak Numara 18 Daire 81 "};
ogr kisi3 = {"Mustafa","Atadan",1923,"10-A", "Cumhuriyet Mahallesi Kutlu Sokak Numara19 Daire 23 "};
ogr kisi4 = {"Asiye","Korkmaz",1938,"12-G", "Ataturk Mahallesi Kalbimizde Sokak Numara 19 Daire 38 "};
ogr kisi5 = {"Mutlu","Turk",2023,"11-A","Care Sokak Ince Mahallesi Numara 23 Daire 03 "};
printf("-------Ogrenci Bilgileri------\n\n");
printf("Ogrenci Adi : %s\nOgrenci Soyadi : %s\nOgrenci No : %d\nOgrenci Sinif : %s \nOgrenci Adresi : %s \n\n",kisi1.isim,kisi1.soyisim,kisi1.ogrno,kisi1.sinif,kisi1.adres);
printf("Ogrenci Adi : %s\nOgrenci Soyadi : %s\nOgrenci No : %d\nOgrenci Sinif : %s \nOgrenci Adresi : %s \n\n",kisi2.isim,kisi2.soyisim,kisi2.ogrno,kisi2.sinif,kisi2.adres);	
printf("Ogrenci Adi : %s\nOgrenci Soyadi : %s\nOgrenci No : %d\nOgrenci Sinif : %s \nOgrenci Adresi : %s \n\n",kisi3.isim,kisi3.soyisim,kisi3.ogrno,kisi3.sinif,kisi3.adres);	
printf("Ogrenci Adi : %s\nOgrenci Soyadi : %s\nOgrenci No : %d\nOgrenci Sinif : %s \nOgrenci Adresi : %s \n\n",kisi4.isim,kisi4.soyisim,kisi4.ogrno,kisi4.sinif,kisi4.adres);	
printf("Ogrenci Adi : %s\nOgrenci Soyadi : %s\nOgrenci No : %d\nOgrenci Sinif : %s \nOgrenci Adresi : %s \n\n",kisi5.isim,kisi5.soyisim,kisi5.ogrno,kisi5.sinif,kisi5.adres);	
	
	
	return 0;
}
