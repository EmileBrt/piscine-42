#include <stdio.h>
#include "ft.h"

int main(){
    int div[] = {10};
    int mod[] = {3};
    ft_ultimate_div_mod(div,mod);
    printf("Le %d / %d fait  q=%d r=%d \n", 10,3,*div,*mod);
}