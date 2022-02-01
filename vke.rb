puts "Boyunuz:"
boy = gets.chomp.to_f
puts "Kilonuz"
kilo = gets.chomp.to_f

if (boy > 5)
    boy /= 100
end

hesaplama = kilo / (boy ** 2) #Kullancı kilo / Boyun karesi
puts("Vücut kitle endeksiniz:",hesaplama)

if hesaplama <= 18.5#Cevaplar
    puts("Zayıfsınız.")
elsif hesaplama >= 18.5 and hesaplama <= 24.9 or hesaplama == 18.5
    puts("Normalsiniz.")
elsif hesaplama >= 25 and hesaplama <= 29.9
    puts("Fazla kilolusunuz, sağlığınız için kilo verin.")
elsif hesaplama >= 30 and hesaplama <= 39.9
    puts("Obezitesiniz, sağlığınız için kilo verin.")
elsif hesaplama >= 40
    puts("İleri obezitesiniz.")
end   
