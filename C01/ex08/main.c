#include <stdio.h>
#include "ft.h"

int main(){
    int tab[4] = {1, 8 ,4, 3};
    ft_sort_int_tab(tab, 4);
    for(int i =0; i<4;i++){
        printf("%d",tab[i]);
    }
    return 0;
}