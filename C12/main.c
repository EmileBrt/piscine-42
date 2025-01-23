#include <stdio.h>
#include <stdlib.h>
#include "ft.h"

int main()
{
    char *strs[] = {"azer", "azerazer"}; // Correct initialization of strs
    t_list *list = ft_list_push_strs(2, strs);

    printf("size list : %i \n", ft_list_size(list));

    // Free the allocated memory
    while (list != NULL) {
        t_list *temp = list;
        list = list->next;
        free(temp);
    }

    return 0;
}