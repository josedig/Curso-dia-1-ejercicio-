<?php

for ($i = 1; $i <= 50; $i++) {
    $tipo = ($i % 2 === 0) ? 'par' : 'impar';
   echo "$i -> $tipo\n"; 
}
?>