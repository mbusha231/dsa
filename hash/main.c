#include <assert.h>
#include "hash.h"

void test_hashtable()
{
    HashTable h_instance = hashtable_new(5);
    HashTable *ht = &h_instance;

    assert(!hashtable_find(ht, "Apple"));

    hashtable_insert_element(ht, "Apple");
    hashtable_insert_element(ht, "Banana");
    hashtable_insert_element(ht, "Mango");

    assert(hashtable_find(ht, "Apple"));
    assert(hashtable_find(ht, "Banana"));
    assert(hashtable_find(ht, "Mango"));
    assert(!hashtable_find(ht, "Orange"));

    hashtable_insert_element(ht, "Apple");
    assert(hashtable_find(ht, "Apple"));

    hashtable_delete_element(ht, "Banana");
    assert(!hashtable_find(ht, "Banana"));

    assert(hashtable_find(ht, "Apple"));
    assert(hashtable_find(ht, "Mango"));

    hashtable_delete_element(ht, "Apple");
    assert(!hashtable_find(ht, "Apple"));

    hashtable_destroy(ht);
}

int main()
{
    test_hashtable();
    return 0;
}
