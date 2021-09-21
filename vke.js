//18, 5 kg/m.'nin altında olanlar: Zayıf
//18.5 – 24, 9 kg/m. arasında olanlar: Normal kilolu
//25 – 29, 9 kg/m. arasında olanlar: Fazla kilolu
//30 – 39, 9 kg/m. arasında olanlar: Obez
//40 kg/m.'nin üzerinde olanlar: İleri derecede obez (morbid obez), olarak görülür.
const readline = require("readline").createInterface({
  input: process.stdin,
  output: process.stdout
});

readline.question(`Boyunuzu giriniz: `, boy => {//Boy giriş
  readline.question(`Kilonuzu giriniz: `, kilo => {//Kilo giriş
    var sonuc = kilo / (boy / 100 * boy / 100)//VKE hesaplama
    if (sonuc < 18.49) {//Yanıtlar
      console.log("Vücut kitle endeksiniz: " + sonuc + "\nZayıfsınız.");
    } else if (sonuc > 18.49 && sonuc < 25) {
      console.log("Vücut kitle endeksiniz: " + sonuc + "\nNormalsiniz.");
    } else if (sonuc > 24.99 && sonuc < 30) {
      console.log("Vücut kitle endeksiniz: " + sonuc + "\nFazla kilolusunuz, sağlığınız için kilo verin.");
    } else if (sonuc > 29.99 && sonuc < 40) {
      console.log("Vücut kitle endeksiniz: " + sonuc + "\nObezitesiniz, sağlığınız için kilo verin.");
    } else if (sonuc > 40) {
      console.log("Vücut kitle endeksiniz: " + sonuc + "\nİleri obezitesiniz..");
    }
    readline.close();
  });
});
