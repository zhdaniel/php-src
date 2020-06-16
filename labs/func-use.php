<?php
$data = 'Hi';
$func = function () use ($data) {
    echo $data;
};

$func();
