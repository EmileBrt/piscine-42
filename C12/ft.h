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

void ft_list_push_front(t_list **begin_list, void *data)
{
    t_list *new_elem = ft_create_elem(data);
    if (new_elem == NULL)
        return;

    new_elem->next = *begin_list;
    *begin_list = new_elem;
}

int ft_list_size(t_list *begin_list){
    t_list * temp = begin_list;
    int c = 0;
    while(temp != NULL){
        c ++;
        temp = temp->next;
    }
    return c;
};

t_list *ft_list_last(t_list *begin_list){
    t_list * temp = begin_list;
    while(temp->next != NULL){
        temp = temp->next;
    }
    return temp;
};

void ft_list_push_back(t_list **begin_list, void *data)
{
    t_list *new_elem = ft_create_elem(data);
    if (new_elem == NULL)
        return;

    if (*begin_list == NULL)
    {
        *begin_list = new_elem;
    }
    else
    {
        t_list *back = ft_list_last(*begin_list);
        back->next = new_elem;
    }
}

t_list *ft_list_push_strs(int size, char **strs){
    t_list * res = ft_create_elem(strs[0]);
    for(int i = 1 ; i < size; i ++){
        ft_list_push_front(&res,strs[i]);
    }
    return res;
};

void ft_list_clear(t_list *begin_list, void (*free_fct)(void *)){
    while (begin_list != NULL) {
        t_list *temp = begin_list;
        begin_list = begin_list->next;
        if (free_fct != NULL) {
            free_fct(temp->data);
        }
        free(temp);
    }
}

t_list *ft_list_at(t_list *begin_list, unsigned int nbr){
    for (unsigned int i = 0; i < nbr && begin_list != NULL; i++){
        begin_list = begin_list->next;
    }
    return begin_list;
};

void ft_list_reverse(t_list **begin_list) {
    t_list *prev = NULL;
    t_list *current = *begin_list;
    t_list *next = NULL;

    while (current != NULL) {
        next = current->next;  // Store next
        current->next = prev;  // Reverse current node's pointer
        prev = current;        // Move pointers one position ahead.
        current = next;
    }
    *begin_list = prev;
}

void ft_list_foreach(t_list *begin_list, void (*f)(void *)){
    int n = ft_list_size(begin_list);
    for(int i = 0; i < n; i ++){
        t_list * elem = ft_list_at(begin_list,i);
        (*f)(elem->data);
    }
};

void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)()) {
    int n = ft_list_size(begin_list);
    for(int i = 0; i < n ; i ++){
        t_list * elem = ft_list_at(begin_list,i);
        if(comp(elem->data) == 0)(*f)(elem->data);
    }
}

t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)()){
    int n = ft_list_size(begin_list);
    for(int i = 0; i < n; i ++){
        t_list * elem = ft_list_at(begin_list,i);
        if((*cmp)(elem->data, data_ref) == 0) return elem;
    }
};

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *)){
    int n = ft_list_size(begin_list);
    for(int i = 0; i < n; i ++){
        t_list * elem = ft_list_at(begin_list,i);
        if((*cmp)(elem->data, data_ref) == 0) (*free_fct)(elem->data);
    }
};

void ft_list_merge(t_list **begin_list1, t_list *begin_list2){
    t_list * last = ft_list_last(begin_list1);
    last->next = begin_list2;
};

void ft_list_sort(t_list **begin_list, int (*cmp)(void *, void *)) {
    int n = ft_list_size(*begin_list);
    int i, j;
    t_list *temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            t_list *j_elem = ft_list_at(*begin_list, j);
            t_list *j1_elem = ft_list_at(*begin_list, j + 1);
            if (cmp(j_elem->data, j1_elem->data) > 0) {
                // Swap data
                void *temp_data = j_elem->data;
                j_elem->data = j1_elem->data;
                j1_elem->data = temp_data;
            }
        }
    }
}

void ft_list_reverse_fun(t_list *begin_list){
    
};