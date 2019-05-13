file local/bin/php

set args illegal.php

#b -source zend_language_parser.c -line 4218
#b -source zend_compile.c -line 1704

#b zend_throw_exception_internal
#b zend_throw_exception
