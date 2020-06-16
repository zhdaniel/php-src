<?php
gc_enable();

class Test
{
    public function __set($k, $v)
    {
        $this->k = $v;
    }
}

$t = new Test;
$t->name = 'Daniel';

gc_collect_cycles();
