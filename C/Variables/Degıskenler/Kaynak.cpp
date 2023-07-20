# include <stdio.h>


// Variables
/*
int main() {

    int  sayi1 = 6;
    float sayi2 = 2.1;
    double sayi3 = 1.26516;
    char harf = 'A';

    printf("int sayi degeri=%d \n Float sayý degeri=%f", sayi1, sayi2);
    printf("\ndouble degeri=%lf", sayi3);
    printf("\nchar harfi=%C", harf);
}*/

/*Notlar: int=tamsayýlarý tutar
float= kesirli sayýlarý tutar
double=derin ve yüksek kesirli sayýlarý tutar
//char= harfleri tutar
*/

// Aritmetik Ýþlemler

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

// Deðiþkenlerin bellek de kapladýklarý yer
/*
int  main(){

    int integerDeðiþkeni;
    double doubledeðiþkeni;
    float floatdeðiþkeni;
    char chardeðiþkeni;

    printf("int in kapladýgý yer=%ld\n",sizeof (integerDeðiþkeni));
    printf("double in kapladýgý yer=%ld\n",sizeof (doubledeðiþkeni));
    printf("float in kapladýgý yer=%ld\n",sizeof (floatdeðiþkeni));
    printf("char in kapladýgý yer=%ld\n",sizeof (chardeðiþkeni));

    return 0;
}*/



// ALýþtýma Aritmetik iþlem
/*
int main(){
    int alinacakSayi;
    int alinacakSayi2;
    int carpma;
    int bolme;
    printf("birinci sayi giriniz");
    scanf("%d",&alinacakSayi); // veri giriþi için scanf kullanýrýz
    printf("\nikinci sayiyi giriniz");
    scanf("%d",&alinacakSayi2); // &= Adres demek
    carpma=alinacakSayi*alinacakSayi2;
    printf("\niki sayinin carpimi=%d",carpma);
    bolme=alinacakSayi/alinacakSayi2;
    printf("\niki sayinin bolumu=%d",bolme);

    return 0;
    // veri giriþi için scanf kullanýrýz ve & olan adresede veriyi kaydederiz
}*/


// Alýþtýrma 2

// #define cevre 20 // bu þelilde de veri tanýmlayabiliriz.
/*
int main(){

    int kareninbirkenaruzunlugu=cevre/4;
    int alan=kareninbirkenaruzunlugu*kareninbirkenaruzunlugu;
    printf("cevresi 20 cm olan karenin alan=%d\nbir kenar uzunlugu=%d",alan,kareninbirkenaruzunlugu);
//Burda karenin verilerini çýkardýk.


    int sayi1,sayi2,sayi3;
    printf("sayilar");
    scanf("%d %d %d",&sayi1,&sayi2,&sayi3);
    int ortalama=(sayi1+sayi2+sayi3)/3;
    printf("\nsayilar=%d,%d,%d\nortalama=%d",sayi1,sayi2,sayi3,ortalama);
//Sayýlarýn ortalamasýný aldýk.
 */

 // Denklem oluþturma Denklem = 2x^2+2y+3
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
