<?php

$n = readline();
$var=0;

for ($i = 1; $i <= $n; $i++) {
    if($i%2==0){
        $var=$i*$i;
        echo "${i}^2 = ${var}\n"; 
    }
}

?>
