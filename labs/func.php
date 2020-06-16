<?php
$data = 10;
function &test($a) { $a = 10; return $a; }
echo test($data);
echo $data;
