//18, 5 kg/m.'nin altında olanlar: Zayıf
//18.5 – 24, 9 kg/m. arasında olanlar: Normal kilolu
//25 – 29, 9 kg/m. arasında olanlar: Fazla kilolu
//30 – 39, 9 kg/m. arasında olanlar: Obez
//40 kg/m.'nin üzerinde olanlar: İleri derecede obez (morbid obez), olarak görülür.

#include <stdio.h>

int main() {

    float boy, kilo;

    printf( "Boyunuz: ");
    scanf("%f", &boy);
    printf( "Kilonuz: ");
    scanf("%f", &kilo);


    if (boy > 5) {
        boy /= 100;
    }

    float sonuc = kilo / (boy*boy);//VKE hesaplama
    printf("Vucut kitle endeksiniz: %f",sonuc);


    if (sonuc < 18.49) {//Yanıtlar
       printf("\nZayıfsınız.");
    } else if (sonuc > 18.49 && sonuc < 25) {
        printf("\nNormalsiniz.");
    } else if (sonuc > 24.99 && sonuc < 30) {
        printf( "\nFazla kilolusunuz, sagliginiz icin kilo verin.");
    } else if (sonuc > 29.99 && sonuc < 40) {
        printf("\nObezitesiniz, sagliginiz icin kilo verin.");
    } else if (sonuc > 40) {
        printf( "\nIleri obezitesiniz..");
    }
    return 0;
}
