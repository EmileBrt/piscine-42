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
    void * res = btree_search_item(root->left, data_ref, *cmpf);
    if(res != NULL) return res;

    if(cmpf(root->item, data_ref) == 0) return root;

    void * res = btree_search_item(root->left, data_ref, *cmpf);
    if(res != NULL) return res;

    return NULL;
    
};

int btree_level_count(t_btree *root){
    int depth,ldepth, rdepth = 0;

    if(root->left != NULL) ldepth = btree_level_count(root->left);
    if(root->right != NULL) rdepth = btree_level_count(root->right);

    if(ldepth >= rdepth){
        int depth = 1 + ldepth;
    }else{
        int depth = 1 + rdepth;
    }
    return depth;
};

typedef struct s_queue_node {
    t_btree *node;
    int level;
    struct s_queue_node *next;
} t_queue_node;

typedef struct {
    t_queue_node *front;
    t_queue_node *rear;
} t_queue;

t_queue *create_queue() {
    t_queue *queue = (t_queue *)malloc(sizeof(t_queue));
    queue->front = queue->rear = NULL;
    return queue;
}

void enqueue(t_queue *queue, t_btree *node, int level) {
    t_queue_node *new_node = (t_queue_node *)malloc(sizeof(t_queue_node));
    new_node->node = node;
    new_node->level = level;
    new_node->next = NULL;
    if (queue->rear == NULL) {
        queue->front = queue->rear = new_node;
    } else {
        queue->rear->next = new_node;
        queue->rear = new_node;
    }
}

t_queue_node *dequeue(t_queue *queue) {
    if (queue->front == NULL)
        return NULL;
    t_queue_node *temp = queue->front;
    queue->front = queue->front->next;
    if (queue->front == NULL)
        queue->rear = NULL;
    return temp;
}

int is_queue_empty(t_queue *queue) {
    return queue->front == NULL;
}

void btree_apply_by_level(t_btree *root, void (*applyf)(void *item, int current_level, int is_first_elem)) {
    if (root == NULL || applyf == NULL)
        return;

    t_queue *queue = create_queue();
    enqueue(queue, root, 0);

    int current_level = 0;
    int first_of_level = 1;

    while (!is_queue_empty(queue)) {
        t_queue_node *queue_node = dequeue(queue);
        t_btree *current_node = queue_node->node;
        int node_level = queue_node->level;
        free(queue_node);

        if (node_level != current_level) {
            current_level = node_level;
            first_of_level = 1;
        }

        applyf(current_node->item, current_level, first_of_level);
        first_of_level = 0;

        if (current_node->left != NULL)
            enqueue(queue, current_node->left, current_level + 1);
        if (current_node->right != NULL)
            enqueue(queue, current_node->right, current_level + 1);
    }

    free(queue);
}