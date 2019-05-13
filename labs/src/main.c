#include <stdio.h>
#include <zend.h>
#include <zend_stack.h>

extern __thread void *_tsrm_ls_cache;

int iter_func(void* elem)
{
    printf("%d\n", *(int*)elem);
    return 0;
}

int main(int argc, char* argv[])
{
#ifdef ZTS
    tsrm_startup(1, 1, 0, NULL);
    (void)ts_resource(0);
    ZEND_TSRMLS_CACHE_UPDATE();
#endif

    start_memory_manager();

    //int *mem = (int*)emalloc(sizeof(int));
    //*mem = 10;

    char data[] = "Hello, World\n";
    //zend_string *s = zend_string_init(data, sizeof(data), 0);
    //printf("===A===\n");
    //for (int i = 0; i < s->len; i++) {
    //    printf("%c", s->val[i]);
    //}
    //printf("===B===\n");
    //zend_string *new_s = zend_string_dup(s, 0);
    //zend_string *copy = zend_string_copy(new_s);
    //printf("ref count: %d\n", (copy->gc).refcount);

    zend_stack stack;
    zend_stack_init(&stack, 64);
    int num = 10;
    zend_stack_push(&stack, &num);
    zend_stack_push(&stack, data);
    zend_stack_apply(&stack, 1, iter_func);

    HashTable ht;
    zend_hash_init(&ht, 10, NULL, NULL, 0);

    zval zdata;
    zend_value value;

    const char key[] = "name0";
    zend_string *str1 = zend_string_init("name0", sizeof(key), 0);
    zend_string *str2 = zend_string_init("name1", sizeof(key), 0);
    //zend_string *str3 = zend_string_init("name2", sizeof(key), 0);

    zend_string *name = zend_string_init("daniel", sizeof("daniel"), 0);
    value.str = name;
    zdata.value = value;
    Z_TYPE_INFO(zdata) = IS_STRING;

    zend_hash_add(&ht, str1, &zdata);
    zend_hash_add(&ht, str2, &zdata);
    //zend_hash_add(&ht, str3, &zdata);

    zval *result = zend_hash_find(&ht, str1);
    if (NULL != result) {
        printf("zval: %s\n", ((result->value).str)->val);
    }

#ifdef ZTS
    tsrm_shutdown();
#endif
}
