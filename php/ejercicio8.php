<?php

for ($i = 1; $i <= 30; $i++) {
    $out = '';
  if  ($i % 3 === 0)  $out .= 'mar';
  if  ($i % 5 === 0) $out .= 'tierra';
   echo ($out !== '' ? $out : "$i \n" );
}
?>