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
    while(begin_list->next != NULL){
        t_list * back = ft_list_last(begin_list);
        free_fct(back);
    }
    free_fct(begin_list);
};