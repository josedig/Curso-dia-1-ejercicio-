<?php
echo "## 2. año nuevo ##\n";

$segundos = 100; //año nuevo

while ($segundos > 0) {
    echo "en : $segundos .\n";
    $segundos -= 10; // Disminuimos la batería en cada ciclo.
}

echo "¡feliz Año!.\n\n";
?>