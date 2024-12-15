#include <stdio.h>
#include "ft.h"

int main(){
    char *base = "0123456789ABCDEF";
    char *res = "7B";
    printf("BASE %s : %s \n",base,res);
    printf("DEC     : %i \n",ft_atoi_base(res,base));
    return 0;
}