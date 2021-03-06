--TEST--
Bug #66535: Extra newline if add_x_header and no additional headers are used
--INI--
sendmail_path=tee mailBug66535.out >/dev/null
mail.add_x_header = On
--SKIPIF--
<?php
if(substr(PHP_OS, 0, 3) == "WIN")
  die("skip Won't run on Windows");
?>
--FILE--
<?php
/* Prototype  : int mail(string to, string subject, string message [, string additional_headers [, string additional_parameters]])
 * Description: Send an email message
 * Source code: ext/standard/mail.c
 * Alias to functions:
 */

echo "*** Testing mail() : send email without additional headers ***\n";

// Initialise all required variables
$to = 'user@company.com';
$subject = 'Test Subject';
$message = 'A Message';

$outFile = "mailBug66535.out";
@unlink($outFile);

var_dump( mail($to, $subject, $message) );
echo file_get_contents($outFile);
unlink($outFile);

?>
===DONE===
--EXPECTF--
*** Testing mail() : send email without additional headers ***
bool(true)
To: user@company.com
Subject: Test Subject
X-PHP-Originating-Script: %d:bug66535.php

A Message
===DONE===
