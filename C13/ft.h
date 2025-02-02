#include <stdlib.h>

typedef struct s_btree {
struct s_btree *left;
struct s_btree *right;
void *item;
} t_btree;

t_btree *btree_create_node(void *item){
    t_btree * res = malloc(sizeof(t_btree));
    res->left = NULL;
    res->right = NULL;
    res->item = item;
    return res;
};

void btree_apply_prefix(t_btree *root, void (*applyf)(void *)){
    applyf(root->item);
    btree_apply_prefix(root->left, applyf);
    btree_apply_prefix(root->right, applyf);
}

void btree_apply_infix(t_btree *root, void (*applyf)(void *)){
    btree_apply_infix(root->left, applyf);
    applyf(root->item);
    btree_apply_infix(root->right, applyf);
}

void btree_apply_suffix(t_btree *root, void (*applyf)(void *)){
    btree_apply_suffix(root->left, applyf);
    btree_apply_suffix(root->right, applyf);
    applyf(root->item);
}

void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *)){
    if (*root == NULL) {
        *root = btree_create_node(item);
        return;
    }
    if (cmpf(item, (*root)->item) < 0) {
        btree_insert_data(&((*root)->left), item, cmpf);
    } else {
        btree_insert_data(&((*root)->right), item, cmpf);
    }
}

void *btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *)){
    
};