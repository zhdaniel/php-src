<?php

class A
{
    static $name = 'A';

    public static function getName()
    {
        return self::$name;
        //return static::$name;
    }
}

class B extends A
{
    static $name = 'B';
}

echo A::getName();
echo PHP_EOL;
echo B::getName();
echo PHP_EOL;
