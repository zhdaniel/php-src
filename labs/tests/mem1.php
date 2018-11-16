<?php

class Foo {
    public $a = "foobarstring";
    public $b;
    public $c = ['some', 'values'];

}

for ($i=0; $i<1000; $i++) {
    $m = memory_get_usage();
    ${'var'.$i} = new Foo;
    echo memory_get_usage() - $m."\n";
}
