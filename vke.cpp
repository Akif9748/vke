#include <iostream>
#include <clocale>
#include <math.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Turkish");
    float boy, kilo;

    cout<<"Boyunuz:"<< endl;
    cin>>boy;
    cout<<"Kilonuz:"<< endl;
    cin>>kilo;
    if (boy > 5) {
        boy /= 100;
    }
    double sonuc = kilo / pow(boy,2);//VKE hesaplama
    cout <<"Vucut kitle endeksiniz: "<<sonuc<<endl;

    if (sonuc < 18.49) {//Yanıtlar
        cout <<"Zayıfsınız."<<endl;
    } else if (sonuc > 18.49 && sonuc < 25) {
        cout <<"Normalsiniz."<<endl;
    } else if (sonuc > 24.99 && sonuc < 30) {
        cout <<"Fazla kilolusunuz, sagliginiz icin kilo verin."<<endl;
    } else if (sonuc > 29.99 && sonuc < 40) {
        cout <<"Obezitesiniz, sagliginiz icin kilo verin."<<endl;
    } else if (sonuc > 40) {
        cout <<"Ileri obezitesiniz.."<<endl;
    }
    return 0;
}
