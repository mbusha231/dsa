#include <assert.h>
#include "heap.h"

void test_heap()
{
    int32_t data[] = {0, 23, 56, 7, 41, 18};
    Heap heap_instance = heap_new(data, 5);
    Heap *heap = &heap_instance;

    assert(heap_size(heap) == 5);
    assert(heap_get_MAX(heap) == 56);

    heap_sort(heap);

    heap_delete(heap);
}

int main()
{
    test_heap();
    return 0;
}
