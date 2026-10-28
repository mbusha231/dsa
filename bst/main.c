#include <assert.h>
#include "bst.h"

void test_bst()
{
    BST tree_instance = bst_new();
    BST *tree = &tree_instance;

    bst_add(tree, 50);
    bst_add(tree, 30);
    bst_add(tree, 70);
    bst_add(tree, 20);
    bst_add(tree, 40);
    bst_add(tree, 60);
    bst_add(tree, 80);

    assert(bst_mass(tree) == 7);

    assert(bst_find(tree, 50));
    assert(bst_find(tree, 30));
    assert(bst_find(tree, 80));
    assert(!bst_find(tree, 100));

    bst_add(tree, 50);
    assert(bst_mass(tree) == 7);

    bst_delete_recursive(tree, 20);
    assert(!bst_find(tree, 20));
    assert(bst_mass(tree) == 6);

    bst_delete_recursive(tree, 30);
    assert(!bst_find(tree, 30));
    assert(bst_mass(tree) == 5);

    bst_delete_recursive(tree, 50);
    assert(!bst_find(tree, 50));
    assert(bst_mass(tree) == 4);

    bst_traversal_inorder_recursive(tree);
    bst_traversal_preorder_recursive(tree);
    bst_traversal_postorder_recursive(tree);
    bst_traversal_inorder_iterative(tree);
    bst_traversal_level_order(tree);

    return;
}

int main()
{
    test_bst();
    return 0;
}

