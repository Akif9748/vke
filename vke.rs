fn main() {    


    let mut boy_str = String::new();
    println!("Boyunuzu giriniz:");
    std::io::stdin().read_line(&mut boy_str).unwrap();

    let mut boy: f32 = boy_str.trim().parse().expect("Giriş tam sayı değil");
     
    let mut kilo_str = String::new();
    println!("Kilonuzu giriniz:");
    std::io::stdin().read_line(&mut kilo_str).unwrap();

    let kilo: f32 = kilo_str.trim().parse().expect("Giriş tam sayı değil");
     
    
    if boy > 5.0 {
       boy /= 100.0;
    }
   
    let sonuc:f32 = kilo / boy.powi(2);

    println!("Vücut kitle endeksiniz: {}", sonuc); 
    if sonuc < 18.5 {//Yanıtlar
      println!("Zayıfsınız.");
    } else if sonuc > 18.49 && sonuc < 25.0 {
      println!("Normalsiniz.");
    } else if sonuc > 24.99 && sonuc < 30.0 {
      println!("Fazla kilolusunuz, sağlığınız için kilo verin.");
    } else if sonuc > 29.99 && sonuc < 40.0 {
      println!("Obezitesiniz, sağlığınız için kilo verin.");
    } else if sonuc > 40.0 {
      println!("İleri obezitesiniz..");
    }
    loop { }

 
}
