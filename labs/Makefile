CC=/Users/zhangze02/local/clang/bin/clang
CXX=/Users/zhangze02/local/clang/bin/clang++

ROOT=$(shell dirname ${CURDIR})
INCFLAGS=-I.. -I$(ROOT)/TSRM -I$(ROOT)/Zend -I$(ROOT)/main
DEFS=-DZTS=1 -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1
DEBUG=-g3 -O0

.PHONY: all clean

all:
	@echo Compiling ...
	@$(CC) $(DEBUG) $(DEFS) \
		main.c \
		$(ROOT)/Zend/zend_API.c \
		$(ROOT)/Zend/zend.c \
		$(ROOT)/Zend/zend_iterators.c \
		$(ROOT)/Zend/zend_signal.c \
		$(ROOT)/Zend/zend_extensions.c \
		$(ROOT)/Zend/zend_smart_str.c \
		$(ROOT)/Zend/zend_alloc.c \
		$(ROOT)/Zend/zend_float.c \
		$(ROOT)/Zend/zend_language_parser.c \
		$(ROOT)/Zend/zend_language_scanner.c \
		$(ROOT)/Zend/zend_sort.c \
		$(ROOT)/Zend/zend_ast.c \
		$(ROOT)/Zend/zend_gc.c \
		$(ROOT)/Zend/zend_list.c \
		$(ROOT)/Zend/zend_sprintf.c \
		$(ROOT)/Zend/zend_builtin_functions.c \
		$(ROOT)/Zend/zend_generators.c \
		$(ROOT)/Zend/zend_llist.c \
		$(ROOT)/Zend/zend_stack.c \
		$(ROOT)/Zend/zend_closures.c \
		$(ROOT)/Zend/zend_hash.c \
		$(ROOT)/Zend/zend_multibyte.c \
		$(ROOT)/Zend/zend_stream.c \
		$(ROOT)/Zend/zend_compile.c \
		$(ROOT)/Zend/zend_highlight.c \
		$(ROOT)/Zend/zend_object_handlers.c \
		$(ROOT)/Zend/zend_string.c \
		$(ROOT)/Zend/zend_constants.c \
		$(ROOT)/Zend/zend_strtod.c \
		$(ROOT)/Zend/zend_default_classes.c \
		$(ROOT)/Zend/zend_ini.c \
		$(ROOT)/Zend/zend_objects_API.c \
		$(ROOT)/Zend/zend_inheritance.c \
		$(ROOT)/Zend/zend_objects.c \
		$(ROOT)/Zend/zend_ts_hash.c \
		$(ROOT)/Zend/zend_dtrace.c \
		$(ROOT)/Zend/zend_opcode.c \
		$(ROOT)/Zend/zend_variables.c \
		$(ROOT)/Zend/zend_exceptions.c \
		$(ROOT)/Zend/zend_ini_parser.c \
		$(ROOT)/Zend/zend_ini_scanner.c \
		$(ROOT)/Zend/zend_operators.c \
		$(ROOT)/Zend/zend_virtual_cwd.c \
		$(ROOT)/Zend/zend_execute.c \
		$(ROOT)/Zend/zend_interfaces.c \
		$(ROOT)/Zend/zend_ptr_stack.c \
		$(ROOT)/Zend/zend_vm_opcodes.c \
		$(ROOT)/Zend/zend_execute_API.c \
		$(ROOT)/TSRM/TSRM.c \
		$(INCFLAGS) \
		-lpthread \
		-o main

clean:
	@echo Cleaning ...
	@rm -rf *.i *.o *.s *.bc main main.dSYM
