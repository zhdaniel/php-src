<?php

for ($i=0; $i<1000; $i++) {
    $m = memory_get_usage();
    ${'var'.$i} = [['some', 'values'], null, 'foobarstring'];
    echo memory_get_usage() - $m . "\n";
}
