#include <stdio.h>
#include <math.h>

int main() {

    float boy, kilo;

    printf( "Boyunuz: ");
    scanf("%f", &boy);
    printf( "Kilonuz: ");
    scanf("%f", &kilo);


    if (boy > 5) {
        boy /= 100;
    }

    float sonuc = kilo / pow(boy,2);//VKE hesaplama
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
