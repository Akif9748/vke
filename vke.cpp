//18, 5 kg/m.'nin altında olanlar: Zayıf
//18.5 – 24, 9 kg/m. arasında olanlar: Normal kilolu
//25 – 29, 9 kg/m. arasında olanlar: Fazla kilolu
//30 – 39, 9 kg/m. arasında olanlar: Obez
//40 kg/m.'nin üzerinde olanlar: İleri derecede obez (morbid obez), olarak görülür.
//Formul = kilo / boy (metre) Kare
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
        boy = boy / 100;
    }
    double sonuc = kilo / pow(boy,2);//VKE hesaplama

    if (sonuc < 18.49) {//Yanıtlar
        cout <<"Vucut kitle endeksiniz: "<<sonuc<< "\nZayıfsınız."<<endl;
    } else if (sonuc > 18.49 && sonuc < 25) {
        cout <<"Vucut kitle endeksiniz: "<<sonuc<< "\nNormalsiniz."<<endl;
    } else if (sonuc > 24.99 && sonuc < 30) {
        cout <<"Vucut kitle endeksiniz: "<<sonuc<< "\nFazla kilolusunuz, sagliginiz icin kilo verin."<<endl;
    } else if (sonuc > 29.99 && sonuc < 40) {
        cout <<"Vucut kitle endeksiniz: "<<sonuc<< "\nObezitesiniz, sagliginiz icin kilo verin."<<endl;
    } else if (sonuc > 40) {
        cout <<"Vucut kitle endeksiniz: "<<sonuc<< "\nIleri obezitesiniz.."<<endl;
    }
    return 0;
}