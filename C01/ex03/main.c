#include <stdio.h>
#include "ft.h"

int main(){
    int div;
    int mod;
    ft_div_mod(10,3,&div,&mod );
    printf("Le %d / %d fait  q=%d r=%d \n", 10,3,div,mod);
}