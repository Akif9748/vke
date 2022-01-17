using System;
//18, 5 kg/m.'nin altında olanlar: Zayıf
//18.5 – 24, 9 kg/m. arasında olanlar: Normal kilolu
//25 – 29, 9 kg/m. arasında olanlar: Fazla kilolu
//30 – 39, 9 kg/m. arasında olanlar: Obez
//40 kg/m.'nin üzerinde olanlar: İleri derecede obez (morbid obez), olarak görülür.

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
            {
                boy = boy / 100;
            }

            double sonuc = kilo / Math.Pow(boy, 2); //VKE hesaplama

            if (sonuc < 18.49)
            {//Yanıtlar
               Console.WriteLine("Vücut kitle endeksiniz: " + sonuc + "\nZayıfsınız.");
            }
            else if (sonuc > 18.49 && sonuc < 25)
            {
               Console.WriteLine("Vücut kitle endeksiniz: " + sonuc + "\nNormalsiniz.");
            }
            else if (sonuc > 24.99 && sonuc < 30)
            {
               Console.WriteLine("Vücut kitle endeksiniz: " + sonuc + "\nFazla kilolusunuz, sağlığınız için kilo verin.");
            }
            else if (sonuc > 29.99 && sonuc < 40)
            {
               Console.WriteLine("Vücut kitle endeksiniz: " + sonuc + "\nObezitesiniz, sağlığınız için kilo verin.");
            }
            else if (sonuc > 40)
            {
               Console.WriteLine("Vücut kitle endeksiniz: " + sonuc + "\nİleri obezitesiniz..");
            }
        }
    }
}
