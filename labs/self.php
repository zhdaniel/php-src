<?php
class A
{
    static $data = 'Hello';

    public static function test()
    {
        echo self::$data;
    }
}

