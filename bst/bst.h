#ifndef _INCLUDED_BST_
#define _INCLUDED_BST_
#include <stdint.h>
typedef struct _tree_node_ TreeNode;
typedef struct _bst_ BST;
struct _tree_node_{
    int32_t key;
    TreeNode *left;
    TreeNode *right;
};
struct _bst_ {
    TreeNode *root;
    uint32_t mass;
};
BST bst_new();
BST *bst_add(BST *tree, int32_t key);
uint32_t bst_find(BST *tree, int32_t key);
uint32_t bst_mass(BST *tree);
uint32_t _height(BST *tree);
BST *bst_delete(BST *tree, int32_t key);
BST *bst_traversal_inorder_recursive(BST *tree);
BST *bst_traversal_iterative(BST *tree);
BST *bst_traversal_preorder_recursice(BST *tree);
BST *bst_traversal_postorder_recursive(BST *tree);
BST *bst_traversal_levelorder(BST *tree);


#ifndef _INCLUDED_STACK
#define _INCLUDED_STACK
#include <stdint.h>

typedef struct _tree_node_ TreeNode;
typedef struct _stack_ Stack;

#define MAX_DEPTH 32

struct _stack_
{
    uint32_t size;
    int32_t top;
    TreeNode *data[MAX_DEPTH];
};

typedef struct _stack_result_ StackResult;

struct _stack_result_
{
    TreeNode *data;
    uint32_t status;
};

#define STACK_OK    1
#define STACK_FULL  2
#define STACK_EMPTY 4

Stack stack_new(uint32_t size);
Stack *stack_push(Stack *stk, TreeNode *data, StackResult *result);
Stack *stack_pop(Stack *stk, StackResult *result);
uint32_t stack_empty(const Stack *stk);
uint32_t stack_full(const Stack *stk);
Stack *stack_delete(Stack *stk);

#ifndef _INCLUDED_QUEUE
#define _INCLUDED_QUEUE

typedef struct _tree_node_ TreeNode;

typedef struct _queue_ Queue;

#define MAX_LENGTH_LEN 32

struct _queue_
{
    uint32_t size;
    uint32_t count;
    uint32_t head;
    uint32_t tail;
    TreeNode *q[MAX_LENGTH_LEN];
};

typedef struct _queue_result_ QueueResult;

struct _queue_result_
{
    TreeNode *data;
    uint32_t status;
};

#define QUEUE_OK    1
#define QUEUE_FULL  2
#define QUEUE_EMPTY 4

Queue queue_new(uint32_t size);
Queue *queue_add(Queue *q, TreeNode *data, QueueResult *result);
Queue *queue_remove(Queue *q, QueueResult *result);
uint32_t queue_full(Queue *q, QueueResult *result);
uint32_t queue_empty(Queue *q);


#endif
