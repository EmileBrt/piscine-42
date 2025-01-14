#include <stdio.h>
#include "ft.h"

int main() {
    t_list* res = ft_create_elem("azer");

    printf("data : %s \n", (char*)res->data);
    
    return 0;
}