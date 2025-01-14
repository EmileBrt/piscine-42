#include <stdio.h>
#include "ft.h"
#include <stdio.h>

int main() {
    char *tab[] = {"azer\0", "tyui\0", "qwer\0", "aaaaa\0", NULL};
    ft_advanced_sort_string_tab(tab,ft_strcmp);

    int i = 0;
    while (tab[i] != NULL) {
        printf("res : %s\n", tab[i]);
        i++;
    }
    return 0;
}