# include <stdio.h>


// Variables
/*
int main() {

    int  sayi1 = 6;
    float sayi2 = 2.1;
    double sayi3 = 1.26516;
    char harf = 'A';

    printf("int sayi degeri=%d \n Float say� degeri=%f", sayi1, sayi2);
    printf("\ndouble degeri=%lf", sayi3);
    printf("\nchar harfi=%C", harf);
}*/

/*Notlar: int=tamsay�lar� tutar
float= kesirli say�lar� tutar
double=derin ve y�ksek kesirli say�lar� tutar
//char= harfleri tutar
*/

// Aritmetik ��lemler

/*
int main(){

   printf("5+7' toplami=%d",5+7);

   int sayi1=5;
   int sayi2=7;
   int toplam=sayi1+sayi2;
   printf("5+7=%d",toplam);

   int a=7;
   int b=3;
   int c=2;
   int islem=(a+b)/c;
   printf("iki sayinin toplaminin yarisi=%d\n",(a+b)/c);

    return 0;
}
*/

// De�i�kenlerin bellek de kaplad�klar� yer
/*
int  main(){

    int integerDe�i�keni;
    double doublede�i�keni;
    float floatde�i�keni;
    char charde�i�keni;

    printf("int in kaplad�g� yer=%ld\n",sizeof (integerDe�i�keni));
    printf("double in kaplad�g� yer=%ld\n",sizeof (doublede�i�keni));
    printf("float in kaplad�g� yer=%ld\n",sizeof (floatde�i�keni));
    printf("char in kaplad�g� yer=%ld\n",sizeof (charde�i�keni));

    return 0;
}*/



// AL��t�ma Aritmetik i�lem
/*
int main(){
    int alinacakSayi;
    int alinacakSayi2;
    int carpma;
    int bolme;
    printf("birinci sayi giriniz");
    scanf("%d",&alinacakSayi); // veri giri�i i�in scanf kullan�r�z
    printf("\nikinci sayiyi giriniz");
    scanf("%d",&alinacakSayi2); // &= Adres demek
    carpma=alinacakSayi*alinacakSayi2;
    printf("\niki sayinin carpimi=%d",carpma);
    bolme=alinacakSayi/alinacakSayi2;
    printf("\niki sayinin bolumu=%d",bolme);

    return 0;
    // veri giri�i i�in scanf kullan�r�z ve & olan adresede veriyi kaydederiz
}*/


// Al��t�rma 2

// #define cevre 20 // bu �elilde de veri tan�mlayabiliriz.
/*
int main(){

    int kareninbirkenaruzunlugu=cevre/4;
    int alan=kareninbirkenaruzunlugu*kareninbirkenaruzunlugu;
    printf("cevresi 20 cm olan karenin alan=%d\nbir kenar uzunlugu=%d",alan,kareninbirkenaruzunlugu);
//Burda karenin verilerini ��kard�k.


    int sayi1,sayi2,sayi3;
    printf("sayilar");
    scanf("%d %d %d",&sayi1,&sayi2,&sayi3);
    int ortalama=(sayi1+sayi2+sayi3)/3;
    printf("\nsayilar=%d,%d,%d\nortalama=%d",sayi1,sayi2,sayi3,ortalama);
//Say�lar�n ortalamas�n� ald�k.
 */

 // Denklem olu�turma Denklem = 2x^2+2y+3
     /*
     int sayiX;
     int sayiY;
     int denklem;
     printf("sayiX i girin:");
     scanf("%d",&sayiX);
     printf("\nsayiY i girin:");
     scanf("%d",&sayiY);
     denklem=2*(sayiX*sayiX)+2*(sayiY)+3;
     printf("\nsonuc=%d",denklem);

 return 0;
 }*/
