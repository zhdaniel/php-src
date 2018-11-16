1. Remove comment in file config.m4
2. `../../local/bin/phpize .`
3. `./configure --with-php-config=../../local/bin/php-config --enable-hello`
4. `../../local/bin/php -dextension=modules/hello.so -m`
