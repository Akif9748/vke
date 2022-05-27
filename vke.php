<?php

$boy = (float)readline('Boyunuzu girin: ');
$kilo = (int)readline('Kilonuzu girin: ');

if ($boy > 5)
    $boy /= 100;

$sonuc = $kilo / pow($boy, 2);//VKE hesaplama

echo "Vücut kitle endeksiniz:"+ $sonuc;
if ($sonuc < 18.49) //Yanıtlar
    echo "Zayıfsınız.";
else if ($sonuc > 18.49 && $sonuc < 25)
    echo "Normalsiniz.";
else if ($sonuc > 24.99 && $sonuc < 30)
    echo "Fazla kilolusunuz, sağlığınız için kilo verin.";
else if ($sonuc > 29.99 && $sonuc < 40)
    echo "Obezitesiniz, sağlığınız için kilo verin.";
else if ($sonuc > 40)
    echo "İleri obezitesiniz..";
