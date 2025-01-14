#include <stdlib.h>
typedef struct s_list {
    struct s_list *next;
    void *data;
} t_list;

t_list *ft_create_elem(void *data){
    t_list * res = (t_list *)malloc(sizeof(t_list));
    res->data = data;
    return res;
};

void ft_list_push_front(t_list **begin_list, void *data){
    
};