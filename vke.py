boy = float(input("Boyunuzu giriniz: "))
kilo = float(input("Kilonuzu giriniz: "))

if boy > 5:  # Sayı CM cinsinden girildiyse anlaşılır ve M cinsine çevrilir.
    boy /= 100

hesaplama = kilo / pow(boy, 2)  # Kullancı kilo / Boyun karesi

print("Vücut kitle endeksiniz:", hesaplama)  # Sayı konsola yazılır
if hesaplama <= 18.5:  # Cevaplar
    print("Zayıfsınız.")
elif hesaplama >= 18.5 and hesaplama <= 24.9 or hesaplama == 18.5:
    print("Normalsiniz.")
elif hesaplama >= 25 and hesaplama <= 29.9:
    print("Fazla kilolusunuz, sağlığınız için kilo verin.")
elif hesaplama >= 30 and hesaplama <= 39.9:
    print("Obezitesiniz, sağlığınız için kilo verin.")
elif hesaplama >= 40:
    print("İleri obezitesiniz.")
