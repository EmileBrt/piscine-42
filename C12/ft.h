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
    t_list * new = ft_create_elem(data);
    new->next = *begin_list;
    *begin_list = new;    
};

int ft_list_size(t_list *begin_list){
    t_list * temp = begin_list;
    int c;
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

void ft_list_push_back(t_list **begin_list, void *data){

};