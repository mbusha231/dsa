#include <assert.h>
#include "queue.h"
void test_queue()
{
    Queue q_instance = queue_new(3);
    Queue *q = &q_instance;
    QueueResult result;
    queue_add(q, 23, &result);
    queue_add(q, 56, &result);
    queue_add(q, 7, &result);
    assert(queue_full(q));
    queue_remove(q, &result);
    assert(result.data == 23 && result.status == QUEUE_OK);
    queue_remove(q, &result);
    assert(result.data == 56 && result.status == QUEUE_OK);
    queue_add(q, 41, &result);
    queue_add(q, 18, &result);
    assert(queue_full(q));
    queue_remove(q, &result);
    assert(result.data == 7 && result.status == QUEUE_OK);
    //assert(result.status == QUEUE_EMPTY);
    queue_remove(q, &result);
    assert(result.data == 41);
    queue_remove(q, &result);
    assert(result.data ==18);
    assert(queue_empty(q));

}

int main()
{
    test_queue();
    return 0;
}
