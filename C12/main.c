#include <stdio.h>
#include <stdlib.h>
#include "ft.h"

int main()
{
    t_list *list = NULL;
    int data1 = 10;
    int data2 = 20;

    ft_list_push_front(&list, &data1);
    ft_list_push_front(&list, &data2);
    ft_list_push_front(&list, &data2);
    ft_list_push_front(&list, &data2);
    ft_list_push_front(&list, &data2);
    ft_list_push_front(&list, &data2);
    ft_list_push_front(&list, &data2);
    ft_list_push_front(&list, &data2);

    printf("size list : %i \n", ft_list_size(list));

    return 0;
}