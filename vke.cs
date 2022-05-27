using System;

namespace vke
{
    internal class vke
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Boyunuzu girin: ");
            double boy = Convert.ToDouble(Console.ReadLine());

            Console.WriteLine("Kilonuzu girin: ");
            double kilo = Convert.ToDouble(Console.ReadLine());

            if (boy > 5)
                boy /= 100;
            

            double sonuc = kilo / Math.Pow(boy, 2); //VKE hesaplama
            Console.WriteLine("Vücut kitle endeksiniz: " + sonuc);
            
            if (sonuc < 18.49)//Yanıtlar
                Console.WriteLine("Zayıfsınız.");
            
            else if (sonuc > 18.49 && sonuc < 25)
                Console.WriteLine("Normalsiniz.");
                
            else if (sonuc > 24.99 && sonuc < 30)
                Console.WriteLine("Fazla kilolusunuz, sağlığınız için kilo verin.");
                
            else if (sonuc > 29.99 && sonuc < 40)
                Console.WriteLine("Obezitesiniz, sağlığınız için kilo verin.");

            else if (sonuc > 40)
                Console.WriteLine("İleri obezitesiniz..");
            
        }
    }
}
