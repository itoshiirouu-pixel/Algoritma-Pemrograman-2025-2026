<?php

while (true) {
    echo "Masukkan nama: ";
    $nama = trim(readline());

    echo "Nama benar? (true/false): ";
    $benar = trim(readline());

    if ($benar === "true") {
        break;
    }
}

echo "Masukkan NIM (angka saja): ";
$nim = intval(trim(readline()));

$saldo = $nim;

echo "====================\n";
echo "Nama: $nama\n";
echo "Saldo awal: Rp $saldo\n";

echo "===== MENU ATM =====\n";
echo "1. Cek Saldo\n";
echo "2. Tarik Tunai\n";
echo "3. Setor Tunai\n";
echo "4. Transfer\n";
echo "5. Keluar\n";
echo "====================\n";

echo "Pilih menu: ";
$menu = intval(trim(readline()));

switch ($menu) {
    case 1:
        echo "Saldo: $saldo\n";
        break;

    case 2:
        echo "Jumlah tarik: ";
        $tarik = intval(trim(readline()));
        echo "Saldo sekarang: " . ($saldo - $tarik) . "\n";
        break;

    case 3:
        echo "Jumlah setor: ";
        $setor = intval(trim(readline()));
        echo "Saldo sekarang: " . ($saldo + $setor) . "\n";
        break;

    case 4:
        echo "Jumlah transfer: ";
        $tf = intval(trim(readline()));
        echo "Saldo sekarang: " . ($saldo - $tf) . "\n";
        break;

    case 5:
        echo "Keluar\n";
        break;

    default:
        echo "Menu tidak valid\n";
        break;
}
