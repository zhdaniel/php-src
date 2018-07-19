CC=/Users/zhangze02/local/clang/bin/clang
CXX=/Users/zhangze02/local/clang/bin/clang++
CC=/usr/bin/gcc
CXX=/usr/bin/g++

PHP_SRC=$(shell dirname ${CURDIR})

INCFLAGS=-I$(PHP_SRC)/TSRM -I$(PHP_SRC)/Zend -I$(PHP_SRC)/main -I$(PHP_SRC)
LDFLAGS=-ldl -lm -lpthread
DEFS=-DZTS=1 -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1
DEBUG=-g3 -O0

ZEND_SRCS=$(PHP_SRC)/TSRM/TSRM.c \
		$(PHP_SRC)/Zend/zend_alloc.c \
		$(PHP_SRC)/Zend/zend_API.c \
		$(PHP_SRC)/Zend/zend_ast.c \
		$(PHP_SRC)/Zend/zend_builtin_functions.c \
		$(PHP_SRC)/Zend/zend.c \
		$(PHP_SRC)/Zend/zend_closures.c \
		$(PHP_SRC)/Zend/zend_compile.c \
		$(PHP_SRC)/Zend/zend_constants.c \
		$(PHP_SRC)/Zend/zend_default_classes.c \
		$(PHP_SRC)/Zend/zend_dtrace.c \
		$(PHP_SRC)/Zend/zend_exceptions.c \
		$(PHP_SRC)/Zend/zend_execute_API.c \
		$(PHP_SRC)/Zend/zend_execute.c \
		$(PHP_SRC)/Zend/zend_extensions.c \
		$(PHP_SRC)/Zend/zend_float.c \
		$(PHP_SRC)/Zend/zend_gc.c \
		$(PHP_SRC)/Zend/zend_generators.c \
		$(PHP_SRC)/Zend/zend_hash.c \
		$(PHP_SRC)/Zend/zend_highlight.c \
		$(PHP_SRC)/Zend/zend_inheritance.c \
		$(PHP_SRC)/Zend/zend_ini.c \
		$(PHP_SRC)/Zend/zend_ini_parser.c \
		$(PHP_SRC)/Zend/zend_ini_scanner.c \
		$(PHP_SRC)/Zend/zend_interfaces.c \
		$(PHP_SRC)/Zend/zend_iterators.c \
		$(PHP_SRC)/Zend/zend_language_scanner.c \
		$(PHP_SRC)/Zend/zend_language_parser.c \
		$(PHP_SRC)/Zend/zend_list.c \
		$(PHP_SRC)/Zend/zend_llist.c \
		$(PHP_SRC)/Zend/zend_multibyte.c \
		$(PHP_SRC)/Zend/zend_object_handlers.c \
		$(PHP_SRC)/Zend/zend_objects_API.c \
		$(PHP_SRC)/Zend/zend_objects.c \
		$(PHP_SRC)/Zend/zend_opcode.c \
		$(PHP_SRC)/Zend/zend_operators.c \
		$(PHP_SRC)/Zend/zend_ptr_stack.c \
		$(PHP_SRC)/Zend/zend_signal.c \
		$(PHP_SRC)/Zend/zend_smart_str.c \
		$(PHP_SRC)/Zend/zend_sort.c \
		$(PHP_SRC)/Zend/zend_sprintf.c \
		$(PHP_SRC)/Zend/zend_stack.c \
		$(PHP_SRC)/Zend/zend_stream.c \
		$(PHP_SRC)/Zend/zend_string.c \
		$(PHP_SRC)/Zend/zend_strtod.c \
		$(PHP_SRC)/Zend/zend_ts_hash.c \
		$(PHP_SRC)/Zend/zend_variables.c \
		$(PHP_SRC)/Zend/zend_virtual_cwd.c \
		$(PHP_SRC)/Zend/zend_vm_opcodes.c

.PHONY: all clean

all:
	@echo Compiling ...
	$(CC) $(DEBUG) $(DEFS) $(ZEND_SRCS) $(INCFLAGS) $(LDFLAGS) main.c -o main

clean:
	@echo Cleaning ...
	@rm -rf *.i *.o *.s *.bc main main.dSYM
