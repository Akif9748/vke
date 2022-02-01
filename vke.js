const readline = require("readline").createInterface({
  input: process.stdin,
  output: process.stdout
});

readline.question(`Boyunuzu giriniz: `, boy => {//Boy giriş
  readline.question(`Kilonuzu giriniz: `, kilo => {//Kilo giriş
    if (boy > 5) boy /= 100;

    const sonuc = (kilo / (boy ** 2)).toFixed(2);//VKE hesaplama
    console.log("Vücut kitle endeksiniz: ", sonuc); 
    if (sonuc < 18.49) {//Yanıtlar
      console.log("Zayıfsınız.");
    } else if (sonuc > 18.49 && sonuc < 25) {
      console.log("Normalsiniz.");
    } else if (sonuc > 24.99 && sonuc < 30) {
      console.log("Fazla kilolusunuz, sağlığınız için kilo verin.");
    } else if (sonuc > 29.99 && sonuc < 40) {
      console.log("Obezitesiniz, sağlığınız için kilo verin.");
    } else if (sonuc > 40) {
      console.log("İleri obezitesiniz..");
    }
    readline.close();
  });
});
